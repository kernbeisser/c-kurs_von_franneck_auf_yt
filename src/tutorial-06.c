#include <stdio.h>

int main() {
  int zahl1;
  printf("Gib eine Zahl ein: "); // wir sind beim 'Du' angelangt :D
  scanf("%d", &zahl1);

  switch (zahl1) {
  case 1:
    printf("EINS\n");
    break;
  case 2:
    printf("ZWEI\n");
    break;
  case 3:
    printf("DREI\n");
    break;
  default:
    printf("NIX");
  }
  return 0;
}
