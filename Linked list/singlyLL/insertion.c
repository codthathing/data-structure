#include <stdio.h>
#include <stdlib.h>
#include "singlyfunction.h"

struct node *insertBegin();
struct node *insertEnd();
struct node *insertAny();

void main()
{
  struct node *temp = singlyTraversal();

  // struct node *insert = insertBegin(temp);

  // struct node *insert = insertEnd(temp);
  // insert = temp;

  struct node *insert = insertAny(temp);
  insert = temp;

  while (insert != NULL)
  {
    printf("%d \n", insert->data);
    insert = insert->next;
  }
}

struct node *insertBegin(struct node *temp)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("What value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = temp;
  temp = newnode;

  return temp;
}

struct node *insertEnd(struct node *temp)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("What value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = NULL;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;

  return temp;
}

struct node *insertAny(struct node *temp)
{
  int pos;
  printf("What position do you want to insert: ");
  scanf("%d", &pos);

  for (int i = 1; i < pos - 1; i++)
  {
    temp = temp->next;
  }

  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  printf("What value do you want to insert: ");
  scanf("%d", &newnode->data);

  newnode->next = temp->next;
  temp->next = newnode;

  return temp;
}