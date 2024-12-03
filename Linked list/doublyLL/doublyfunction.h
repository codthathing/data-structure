#ifndef DOUBLYFUNCTION_H
#define DOUBLYFUNCTION_H

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};

struct NodePair
{
  struct node *head;
  struct node *tail;
};

struct NodePair doublyInput();

#endif