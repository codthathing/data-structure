#ifndef DOUBLYFUNCTION_H
#define DOUBLYFUNCTION_H

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};

struct node *doublyInput();

#endif