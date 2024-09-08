#include <stdio.h>
#include <stdlib.h>

void main()
{
  struct node
  {                    // This is the structure of each node in the linkedlist
    int data;          // variable of the datas that will be in each node
    struct node *next; // struct node here is because struct node is the datatype of the next node address the next pointer will store
  };

  struct node *head, *firstnode, *newnode, *lastnode;
  head = NULL;

  firstnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the first element: ");
  scanf("%d", &firstnode->data);

  firstnode->next = NULL;
  head = firstnode;

  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the new element: ");
  scanf("%d", &newnode->data);

  newnode->next = NULL;
  firstnode->next = newnode;

  lastnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the last element: ");
  scanf("%d", &lastnode->data);

  lastnode->next = NULL;
  newnode->next = lastnode;

  printf("%d", firstnode->data);
}