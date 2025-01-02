#include <stdio.h>
#include <stdlib.h>
#include "circularSinglyFunction.h"

struct node *deletionBegin();
struct node *deletionEnd();
struct node *deletionAny();

void main()
{
  struct node *head, *tail, *delete, *temp;

  struct NodePair pointers = circularSinglyInput();
  head = pointers.head;
  tail = pointers.tail;

  delete = deletionAny(head);
  temp = delete;
  while (temp->next != delete)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  };
  printf("%d \n", temp->data);
};

struct node *deletionBegin(struct node *head, struct node *tail)
{
  struct node *temp = head;
  head = temp->next;
  tail->next = head;
  free(temp);

  return head;
};

struct node *deletionEnd(struct node *tail) {
  struct node *current_node, *prev_node;
  current_node = tail->next;
  while (current_node->next != tail->next)
  {
    prev_node = current_node;
    current_node = current_node->next;
  };
  prev_node->next = tail->next;
  tail = prev_node;
  free(current_node);

  current_node = tail->next;

  return current_node;
};

struct node *deletionAny(struct node *head) {
  struct node *prev_node, *current_node;
  prev_node = head;

  int posistion;
  printf("What position do you want to delete: ");
  scanf("%d", &posistion);

  for (int i = 1; i < posistion - 1; i++)
  {
    prev_node = prev_node->next;
  };

  current_node = prev_node->next;
  prev_node->next = current_node->next;
  free(current_node);

  return head;
};