#include <stdio.h>

int main()
{
  int array[10];
  int size;

  printf("Enter size of array between 1 and 10 inclusive: ");
  scanf("%d", &size);

  for (int i = 0; i < size; i++)
  {
    printf("Enter element %d: ", i+1);
    scanf("%d", &array[i]);
  };

  int position;
  printf("What position do you want to insert: ");
  scanf("%d", &position)

  return 0;
}