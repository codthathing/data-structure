#include <stdio.h>
#include <stdlib.h>
#include "circularSinglyFunction.h"

struct NodePair circularSinglyInput()
{
  struct node *head, *tail, *newnode;
  head = NULL;

  int runcode = 1;

  while (runcode)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter new element: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
      head = tail = newnode;
    }
    else
    {
      tail->next = newnode;
      tail = newnode;
    }
    tail->next = head;
    printf("\n");

    printf("Do you want enter new element (0 / 1)? ");
    scanf("%d", &runcode);
  };
  struct NodePair pointers = {head, tail};

  return pointers;
};