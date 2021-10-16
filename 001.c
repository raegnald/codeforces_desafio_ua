#include <stdio.h>

int main() {

  // a: cantidad de cristales pequeños
  //      precio: 3/ud
  // b: cantidad de cristales grandes
  //      precio 5/ud
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("%d", (5 * b) + (3 * a));

  return 0;
}