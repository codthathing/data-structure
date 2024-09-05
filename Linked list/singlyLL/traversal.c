#include <stdio.h>
#include <stdlib.h>

int main()
{

  struct node
  {
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
      head = temp = newnode;
    }
    else
    {
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

  return 0;
}