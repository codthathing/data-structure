#include <stdio.h>
#include <stdlib.h>
#include "singlyfunction.h"

struct node *deleteBegin();
struct node *deleteEnd();
struct node *deleteAny();

void main()
{
  struct node *temp = singlyTraversal();

  // struct node *delete = deleteBegin(temp);

  // struct node *delete = deleteEnd(temp);
  // delete = temp;

  struct node *delete = deleteAny(temp);
  delete = temp;

  while (delete != NULL)
  {
    printf("%d \n", delete->data);
    delete = delete->next;
  }
}

struct node *deleteBegin(struct node *temp)
{
  struct node *point;
  point = temp;
  temp = temp->next;
  free(point);

  return temp;
};

struct node *deleteEnd(struct node *temp)
{
  struct node *prevpoint;

  while (temp->next != NULL)
  {
    prevpoint = temp;
    temp = temp->next;
  }

  prevpoint->next = NULL;
  free(temp);

  return temp;
};

struct node *deleteAny(struct node *temp)
{
  struct node *prevpoint;

  int pos;
  printf("What position do you want to delete: ");
  scanf("%d", &pos);

  for (int i = 1; i < pos; i++)
  {
    prevpoint = temp;
    temp = temp->next;
  }

  prevpoint->next = temp->next;
  free(temp);

  return temp;
};