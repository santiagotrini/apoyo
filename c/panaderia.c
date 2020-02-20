#include <stdio.h>

float ventas[7];  // [1000, 500, 2500, 1300, 1700, 2000, 1000]
float total = 0.0f;
float promedio = 0.0, minimo = 9999999.0, maximo = 0.0;
int diaMax, diaMin;

int main() {

  for (int i = 0; i < 7; i++) {
    printf("Ingrese las ventas del dia %d: \n", i + 1);
    scanf("%f", &ventas[i]);
  }

  for (int i = 0; i < 7; i++) {
    total = total + ventas[i];

    if (ventas[i] < minimo) {
      minimo = ventas[i];
      diaMin = i + 1;
    }
    if (ventas[i] > maximo) {
      maximo = ventas[i];
      diaMax = i + 1;
    }
  }

  promedio = total / 7.0;

  for (int i = 0; i < 7; i++) {
    if (ventas[i] < promedio) {
      printf("El dia %d se vendio menos que el promedio \n", i + 1);
      if (ventas[i] < 1000)
        printf("Encima se facturo menos que 1000 pesos ese dia, el dia %d \n", i + 1);
    }
  }

  for (int i = 0; i < 7; i++) {
    if (ventas[i] > 1500) {
      printf("El dia %d se facturo mas de 1500 pesos, exactamente el %.2f%% de la recaudacion \n", i + 1, (ventas[i] * 100) / total);
    }
  }

  printf("El total de ventas de la semana fue de %.2f \n", total);

  printf("El promedio de ventas de la semana fue de %.2f \n", promedio);

  printf("El dia que menos se vendio fue el dia %d por un total de %.2f \n", diaMin, minimo);
  printf("El dia que mas se vendio fue el dia %d por un total de %.2f \n", diaMax, maximo);

  printf("\n");

  printf("Atencion voy a imprimir el vector \n");
  for (int i = 0; i < 7; i++) {
    printf("%.2f ", ventas[i]);
  }
  printf("\n");

  //  ALGORITMO DE INSERTION SORT //
  int i = 1;
  int j;
  while (i < 7) {
    j = i;
    while (j > 0 && ventas[j - 1] > ventas[j]) {
      int aux = ventas[j];
      ventas[j] = ventas[j - 1];
      ventas[j - 1] = aux;
      j--;
    }
    i++;
  }
  // FIN DE INSERTION SORT //

  printf("Atencion voy a imprimir el vector pero ahora esta ordenado \n");
  for (int i = 0; i < 7; i++) {
    printf("%.2f ", ventas[i]);
  }
  printf("\n");


  return 1;
}
