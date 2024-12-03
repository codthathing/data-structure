#include <stdio.h>
#include <stdlib.h>
#include "doublyfunction.h"

struct node *deletionBegin();
struct node *deletionEnd();
struct node *deletionAny();

void main()
{
  struct NodePair pointers = doublyInput();
  struct node *head = pointers.head;
  struct node *tail = pointers.tail;

  struct node *temp = deletionAny(head);
  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  };
};

struct node *deletionBegin(struct node *head)
{
  struct node *temp = head;
  head = head->next;
  head->prev = NULL;
  free(temp);

  return head;
};


struct node *deletionEnd(struct node *head, struct node *tail)
{
  struct node *temp = tail;
  tail = tail->prev;
  tail->next = NULL;
  free(temp);

  return head;
};


struct node *deletionAny(struct node *head)
{
  struct node *temp = head;

  int posistion;
  printf("What position do you want to delete: ");
  scanf("%d", &posistion);

  for (int i = 1; i < posistion; i++)
  {
    temp = temp->next;
  };

  temp->prev->next = temp->next;
  temp->next->prev = temp->prev;
  free(temp);

  return head;
};