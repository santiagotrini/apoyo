#include <stdio.h>

int poblacion[5];
int total = 0, max = 0, indiceComunaMax = 0;
float promedio = 0;

int main() {

  for (int i = 0; i < 5; i++) {
    printf("Por favor ingrese la poblacion de la comuna %d \n", i + 1);
    scanf("%d", &poblacion[i]);
  }


  for (int i = 0; i < 5; i++) {
    total = total + poblacion[i];
    if (poblacion[i] > max) {
      max = poblacion[i];
      indiceComunaMax = i;
    }
  }

  promedio = total / 5.0;
  printf("El total de habitantes es: %d \n", total);
  printf("La comuna con mas habitantes es: %d \n", indiceComunaMax + 1);

  for (int i = 0; i < 5; i++) {
    if (poblacion[i] > promedio)
      printf("La comuna %d supera el promedio de %.0f habitantes \n", i + 1, promedio);
  }

  for (int i = 0; i < 5; i++) {
    printf("La comuna %d ocupa el %d%% del total de habitantes \n", i + 1, (poblacion[i] * 100) / total);
  }

  printf("\n");
  return 1;
}
