#include <stdio.h>
#include <stdlib.h>
#include "circularSinglyFunction.h"

struct node *insertionBegin();
struct node *insertionEnd();
struct node *insertionAny();

void main()
{
  struct node *head, *tail, *insert, *temp;

  struct NodePair pointers = circularSinglyInput();
  head = pointers.head;
  tail = pointers.tail;

  insert = insertionAny(head);
  temp = insert;
  while (temp->next != insert)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  };
  printf("%d \n", temp->data);
};

struct node *insertionBegin(struct node *head, struct node *tail)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = head;
  tail->next = newnode;
  head = newnode;

  return head;
};

struct node *insertionEnd(struct node *head, struct node *tail)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = tail->next;
  tail->next = newnode;
  tail = newnode;

  return head;
};

struct node *insertionAny(struct node *head)
{
  int position;
  printf("What position do you want to insert value: ");
  scanf("%d", &position);

  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  struct node *temp = head;
  for (int i = 1; i < position - 1; i++)
  {
    temp = temp->next;
  };

  newnode->next = temp->next;
  temp->next = newnode;

  return head;
};