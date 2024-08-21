#include <stdio.h>

int main() {

  int num = 10;
  int *numPoint; 
  numPoint = &num;
  printf("%p \n", numPoint);

  int array[5] = {3, 7, 2, 8, 10};
  int *arrPoint = &array[0]; // Points to the address of the first element a[0]
  arrPoint++; // Now points to the address of the second element because of the increment sign a[1]
  printf("%p \n", array); // Prints the address of the first element beacause "array" contains the base address of the element which is also the address of the first element 
  printf("%p \n", arrPoint); // prints the address of second element
  printf("%d \n", *(array + 3)); // prints the fourth element a[3] because of the reference operator *
  printf("%d \n", *(arrPoint + 1)); // prints the third element beacause "arrPoint" already points to the second element so he further increment prints the thirst element
  printf("%d \n", *arrPoint); // prints the second element because the pointer no longer points to the first element
  printf("%p\n", &array + 1); // prints the next element after the array because "&array" points to the address of the whole array and not array base address

  return 0;
}