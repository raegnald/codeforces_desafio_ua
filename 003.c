#include <stdio.h>

int main() {

  int n, // número de equipos registrados
      x, // mínimo de participantes en un equipo
      y; // máximo de participantes en un equipo

  scanf("%d", &n);
  scanf("%d", &x);
  scanf("%d", &y);

  int equipo_actual,  // los equipos
      permitidos = 0; // cantidad de equipos permitidos

  for (int i = 0; i < n; i++) {
    scanf("%d", &equipo_actual);

    if (equipo_actual >= x && equipo_actual <= y)
      permitidos += 1;
  }

  printf("%d", permitidos);

  return 0;
}