#include <stdio.h>

int determine_coord(int x, int y) {
  if (x > 0 && y > 0)
    return 1;
  if (x < 0 && y > 0)
    return 2;
  if (x < 0 && y < 0)
    return 3;
  if (x > 0 && y < 0)
    return 4;
}

int main() {

  int x, y;

  scanf("%d", &x);
  scanf("%d", &y);

  printf("%d", determine_coord(x, y));

  return 0;
}