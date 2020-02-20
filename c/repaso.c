#include <stdio.h>

int vector[10];

int main() {
  for (int i = 0; i < 10; i++) {
    vector[i] = i + 1;
    printf("%d ", vector[i]);
  }
  printf("\n");

  int j = 0;
  while (j < 10) {
    printf("%d ", vector[j]);
    j++;
  }
  printf("\n");

  return 1;
}
