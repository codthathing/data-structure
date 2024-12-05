#include <stdio.h>
#include <stdlib.h>
#include "doublyfunction.h"

struct node *reversal();

void main()
{
  struct NodePair pointers = doublyInput();
  struct node *head = pointers.head;
  struct node *tail = pointers.tail;

  struct node *temp = reversal(head, tail);
  while (temp != NULL)
  {
    printf("%d \n", temp->data);
    temp = temp->next;
  };
};

struct node *reversal(struct node *head, struct node *tail)
{
  struct node *current_node, *next_node;
  current_node = head;
  while (current_node != NULL)
  {
    next_node = current_node->next;
    current_node->next = current_node->prev;
    current_node->prev = next_node;
    current_node = next_node;
  };
  current_node = head;
  head = tail;
  tail = current_node;

  return head;
};