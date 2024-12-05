#ifndef CIRCULARSINGLYFUNCTION_H
#define CIRCULARSINGLYFUNCTION_H

struct node
{
  int data;
  struct node *next;
};

struct NodePair {
  struct node *head;
  struct node *tail;
};

struct NodePair circularSinglyInput();

#endif