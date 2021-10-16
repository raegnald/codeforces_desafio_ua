#include <stdio.h>
#include <string.h>

// Coordenadas iniciales de Tony
int x = 0, y = 0;

int move_tony(char direction) {
  if (direction == 'U')
    y += 1;
  if (direction == 'R')
    x += 1;
  if (direction == 'D')
    y -= 1;
  if (direction == 'L')
    x -= 1;
}

int main() {

  // Secuencia de movimientos de Tony
  char s[100];
  scanf("%s", s);

  for (int i = 0; i < strlen(s); i++) {
    move_tony(s[i]);
  }

  printf("%d\n", x);
  printf("%d", y);

  return 0;
}