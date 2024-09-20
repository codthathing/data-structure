#include <stdio.h>
#include <stdlib.h>
#include "doublyfunction.h"

struct node *insertBegin();
struct node *insertEnd();
struct node *insertAny();

void main()
{
  struct node *temp = doublyInput();

  // struct node *insert = insertBegin(temp);

  // struct node *insert = insertEnd(temp);
  // insert = temp;

  struct node *insert = insertAny(temp);
  insert = temp;

  while (insert != NULL)
  {
    printf("%d \n", insert->data);
    insert = insert->next;
  };
};

struct node *insertBegin(struct node *temp)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->prev = NULL;

  newnode->next = temp;
  temp->prev = newnode;
  temp = newnode;

  return temp;
};

struct node *insertEnd(struct node *temp)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = NULL;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = newnode;
  newnode->prev = temp;
  temp = newnode;

  return temp;
};

struct node *insertAny(struct node *temp)
{
  int pos;
  printf("What position do you want to insert value: ");
  scanf("%d", pos);

  struct node *newnode = (struct node *) malloc(sizeof(struct node));
  printf("\nWhat value do you want to insert: ");
  scanf("%d", &newnode->data);

  for (int i = 1; i < pos; i++)
  {
    temp = temp->next;
  }
  
  newnode->next = temp;
  newnode->prev = temp->prev;
  temp->prev = newnode; 
  newnode->prev->next = newnode;

  return temp;
};