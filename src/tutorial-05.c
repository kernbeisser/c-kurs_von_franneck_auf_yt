#include <stdio.h>

int main() {
  int zahl1;
  printf("Geben Sie eine Zahl ein: ");
  scanf("%d", &zahl1);

  if (zahl1 > 4) {
    printf("Die Zahl is groesser 4\n");
  } else if (zahl1 < 4) {
    printf("Die Zahl is kleiner 4\n");
  } else {
    printf("Die Zahl ist gleich 4");
  }

  return 0;
}
