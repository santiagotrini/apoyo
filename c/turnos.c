#include <stdio.h>

int turnos[4][4];

int main() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("Ingrese turnos del dia %d, de la especialidad %d: \n", i + 1, j + 1);
      scanf("%d", &turnos[i][j]);
    }
  }


  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d \t", turnos[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  return 1;
}
