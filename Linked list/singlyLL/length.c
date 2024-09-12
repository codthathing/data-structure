#include <stdio.h>
#include <stdlib.h>
#include "singlyfunction.h"

void main() {
  struct node *temp = singlyTraversal();
  int count = 0;

  while(temp != NULL) {
    temp = temp->next;
    count++;
  }

  printf("The length of your linked list: %d", count);
}