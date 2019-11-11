#include <stdio.h>

// insertion sort para arrays de long n
void sort(int arr[], int n) {
  int i = 1;
  int j;
  while (i < n) {
    j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(arr, j, j - 1);
      j--;
    }
    i++;
  }
}

// funcion auxiliar para intercambiar dos valores de un array
void swap(int arr[], i, j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main() {
  int size = 4;
  int array[size];

  for (int i = 0; i < size; i++) {
    scanf("%d\n", &array[i]);
  }

  sort(array, size);

  printf("---- imprimo array ----\n");

  for (int i = 0; i < size; i++) {
    printf("%d\n", array[i]);
  }

  return 1;
}
