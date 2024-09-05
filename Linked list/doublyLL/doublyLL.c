#include <stdio.h>

int main()
{
  struct node
  {
    struct node *prev;
    int data;
    struct node *next;  
  };

  return 0;
}