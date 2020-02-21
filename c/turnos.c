// hacer un menu

#include <stdio.h>

int turnos[4][4];
int turno, opcion, tecla, diaMin, totalTurnos = 0;
int min = 121, max = -1, iMax, jMax, diagonal = 0;

int main() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      do {
        printf("Ingrese turnos del dia %d, de la especialidad %d: \n", i + 1, j + 1);
        printf("Solo ingresar valores positivos menores o iguales a 30: \n");
        scanf("%d", &turno);
      } while (turno > 30 || turno < 0);
      turnos[i][j] = turno;
    }
  }
  printf("\e[1;1H\e[2J");
  do {
    printf("---- MENU ----\n");
    printf("1) Promedio de turnos por dia \n");
    printf("2) Total de turnos por especialidad \n");
    printf("3) Diagonal principal y maximo \n");
    printf("4) Mayor numero de turnos por especialidad \n");
    printf("5) Salir \n");
    printf("Ingrese una opcion: \n");
    scanf("%d", &opcion);
    switch (opcion) {
      case 1:   for (int i = 0; i < 4; i++) {
                  int totalTurnosPorDia = 0;
                  for (int j = 0; j < 4; j++) {
                    totalTurnosPorDia = totalTurnosPorDia + turnos[i][j];
                  }
                  if (totalTurnosPorDia < min) {
                    min = totalTurnosPorDia;
                    diaMin = i + 1;
                  }
                  float promedio = totalTurnosPorDia / 4.0;
                  printf("Promedio de turnos del dia %d es %.2f \n", i + 1, promedio);
                }
                printf("El dia con menos turnos fue el %d con %d turnos \n", diaMin, min);
                printf("Presione cualquier tecla para continuar \n");
                scanf("%s", &tecla);
                printf("\e[1;1H\e[2J");
                break;

      case 2:   for (int j = 0; j < 4; j++) {
                  int totalPorEspecialidad = 0;
                  for (int i = 0; i < 4; i++) {
                    totalPorEspecialidad += turnos[i][j];
                    totalTurnos += turnos[i][j];
                  }
                  printf("El total de turnos de la especialidad %d es de %d \n", j + 1, totalPorEspecialidad);
                }
                printf("La cantidad total de turnos es de %d \n", totalTurnos);
                printf("Presione cualquier tecla para continuar \n");
                scanf("%s", &tecla);
                printf("\e[1;1H\e[2J");
                break;

      case 3:   printf("La diagonal principal es ");
                for (int i = 0; i < 4; i++) {
                  for (int j = 0; j < 4; j++) {
                     if (turnos[i][j] > max) {
                       max = turnos[i][j];
                       iMax = i;
                       jMax = j;
                     }
                     if (i == j) {
                       printf("%d ", turnos[i][j]);
                     }
                  }
                }
                printf("\n");
                printf("La fila %d y columna %d tiene el maximo que es %d \n", iMax, jMax, max);

                printf("Presione cualquier tecla para continuar \n");
                scanf("%s", &tecla);
                printf("\e[1;1H\e[2J");
                break;

      case 4:   for (int j = 0; j < 4; j++) {
                  int maxEspecialidad = -1;
                  int diaMaxEsp = 0;
                  for (int i = 0; i < 4; i++) {
                    if (turnos[i][j] > maxEspecialidad) {
                      maxEspecialidad = turnos[i][j];
                      diaMaxEsp = i + 1;
                    }
                  }
                  printf("Especialidad %d, dia %d maximo de turnos: %d\n", j + 1, diaMaxEsp, maxEspecialidad);
                }

                printf("Presione cualquier tecla para continuar \n");
                scanf("%s", &tecla);
                printf("\e[1;1H\e[2J");
                break;

      case 5:   break;

      default:  printf("Ingresa una opcion entre 1 y 5 \n");
                printf("Presione cualquier tecla para continuar \n");
                scanf("%s", &tecla);
                printf("\e[1;1H\e[2J");
                break;
    }

  } while (opcion != 5);

  /*
  printf("\n----------- Te imprimo la matriz como quedo -----------\n\n");

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d \t", turnos[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  */
  return 1;
}
