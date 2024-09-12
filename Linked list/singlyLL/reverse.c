#include <stdio.h>
#include <stdlib.h>
#include "singlyfunction.h"

void main()
{
  struct node *temp = singlyTraversal();
  struct node *prevpoint, *nextpoint, *current;

  prevpoint = NULL;
  current= nextpoint = temp;
  while (current != NULL)
  {
    nextpoint = current->next;
    current->next = prevpoint;
    prevpoint = current;
    current = nextpoint;
  }
  temp = prevpoint; 

  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}