#include <stdio.h>

int main() {

  int n; // Número de elementos que se van a dar
  scanf("%d", &n);

  int a[n]; // El array a de n elementos

  // Recolectar el array
  int elem = 0;
  do {
    scanf("%d", &a[elem++]);
  } while (getchar() != '\n' && elem < n);

  // Aquí se guardan las ocurrencias
  int ocurrencies[n];
  for (int i = 0; i < n; i++)
    ocurrencies[i] = 0;

  // Buscando repeticiones
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        // printf("(%d)%d:%d ", a[i], i, j);

        ocurrencies[a[i]] += 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d:%d ", i, ocurrencies[i]);
    // ...
  }

  return 0;
}
