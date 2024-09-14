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

  struct node *head, *firstnode, *newnode, *lastnode, *temp;
  head = NULL;

  firstnode = (struct node*) malloc(sizeof(struct node));
  printf("Enter first element: ");
  scanf("%d", &firstnode->data);
  firstnode->next = NULL;
  firstnode->prev = NULL;
  head = firstnode;

  newnode = (struct node*) malloc(sizeof(struct node));
  printf("Enter new element: ");
  scanf("%d", &newnode->data);
  newnode->next = NULL;
  newnode->prev = firstnode;
  firstnode->next = newnode;

  lastnode = (struct node*) malloc(sizeof(struct node));
  printf("Enter last element: ");
  scanf("%d", &lastnode->data);
  lastnode->next = NULL;
  lastnode->prev = newnode;
  newnode->next = lastnode;

  temp = head;
  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  }
}