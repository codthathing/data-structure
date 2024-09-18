#include <stdio.h>
#include <stdlib.h>
#include "doublyfunction.h"

void main()
{
  struct node *temp = doublyInput();
  
  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}