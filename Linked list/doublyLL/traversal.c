#include <stdio.h>
#include <stdlib.h>

void main()
{
  struct node
  {
    struct node *prev;
    int data;
    struct node *next;
  };

  struct node *head, *newnode, *temp;
  head = NULL;

  int runcode;

  while (runcode)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter new element: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL)
    {
      newnode->prev = NULL;
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

  temp = head;
  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}