#include <stdio.h>
#include <stdlib.h>
#include "circularSinglyFunction.h"

void main()
{
  struct node *temp, *head, *tail;
  struct NodePair pointers = circularSinglyInput();
  head = pointers.head;
  tail = pointers.tail;

  temp = head;
  while (temp->next != head)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  };
  printf("%d \n", temp->data);
};