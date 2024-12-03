#include <stdio.h>
#include <stdlib.h>
#include "doublyfunction.h"

struct NodePair doublyInput()
{
  struct node *head, *newnode, *temp, *tail;
  head = NULL;

  int runcode = 1;

  while (runcode)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter new element: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
      head = temp = newnode;
    }
    else
    {
      newnode->prev = temp;
      temp->next = newnode;
      temp = newnode;
    }
    printf("\n");

    printf("Do you want to enter new element (0 / 1)? ");
    scanf("%d", &runcode);
  }
  tail = temp;
  struct NodePair pointers = {head, tail};

  return pointers;
}