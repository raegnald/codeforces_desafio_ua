#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  // Tamaño del cuadro (n: eje y; m: eje x)
  int n, m;
  scanf("%d %d", &n, &m);

  int painting[n][m];
  bool original = true;

  // Recogiendo los píxeles del cuadro
  for (int i = 0; i < n; i++) {
    int count = 0;
    do {
      scanf("%d", &painting[i][count++]);
    } while (getchar() != '\n' && count < m);
  }

  // Comprobar la originalidad del cuadro según Maxim
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < m - 1; j++) {
      bool left = painting[i][j] == painting[i][j + 1];
      bool down = painting[i][j] == painting[i + 1][j];
      bool leftdown = painting[i][j] == painting[i + 1][j + 1];

      if (left && down && leftdown) {
        original = false;
        goto end;
      }
    }
  }

end:
  printf("%s\n", original ? "ORIGINAL" : "UNORIGINAL");

  return 0;
}