#include <stdio.h>
#include <stdlib.h>
#include "singlyfunction.h"

void main()
{
  struct node *temp = singlyTraversal();

  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}