#include <stdio.h>

// void sizeOfArray(int size) {
//   printf("Enter size of array between 1 and 10 inclusive: ");
//   scanf("%d", &size);
// }

int main() {
  int size;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int array[size];

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &array[i]);
  };
  printf("\n");

  int position;
  printf("What position do you want to insert: ");
  scanf("%d", &position);
  
  int newValue;
  printf("New element: ");
  scanf("%d", &newValue);

  for (int i = size; i >= position - 1; i--) {
    array[i + 1] = array[i];
  };
  array[position - 1] = newValue;
  size = size + 1;
  printf("\n");

  for(int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }
  
  return 0;
}