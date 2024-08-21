#include <stdio.h>

int main() {
  int size;

  printf("Enter size of array: ");
  scanf("%d", &size);

  int array[size];

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  };
  printf("\n");

  int position;
  printf("What position do you want to delete: ");
  scanf("%d", &position);

  for (int i = position - 1; i < size; i++) {
    array[i] = array[i + 1];
  }
  size = size - 1;
  printf("\n");

  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}