#include <stdio.h>

void main() {
  int twoArray[3][3];
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      printf("Enter %d row %d element: ", i + 1, j + 1);
      scanf("%d", &twoArray[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d, ", twoArray[i][j]);
    }
  }
}