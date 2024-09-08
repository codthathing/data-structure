#include <stdio.h>

void main()
{
  struct node
  {
    struct node *prev;
    int data;
    struct node *next;  
  };
}