#include <stdio.h>

int vector[] = {6, 5, 4, 3, 2, 1};

// 6 es por el tamaño del vector

int main() {

  // BUBBLE SORT //

  for (int i = 1; i < 6; i++) {
    for (int j = 0; j < 6 - i; j++) {
      if (vector[j] > vector[j + 1]) {
        int aux = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = aux;
      }
    }
  }

  // FIN BUBBLE SORT //

  for (int i = 0; i < 6; i++) {
    printf("%d ", vector[i]);
  }
  printf("\n");
  return 1;
}
