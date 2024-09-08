#include <stdio.h>

void main() {
  int twoArray[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d, ", twoArray[i][j]);
    }    
  }
  printf("\n");

  printf("%p \n", twoArray);
  printf("%p \n", &twoArray);
  printf("%p \n", *twoArray);
  printf("%p \n", twoArray[0]);
  printf("%p \n", &twoArray[0][0]);
}