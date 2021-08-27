#include <stdio.h>

int main() {

  int zahl1 = 6;

  printf("while-Ausgabe:\n");
  while (zahl1 > 5 && zahl1 < 10) {

    zahl1++;
    printf("ich bin zwischen 5 und 10\n");
  }

  // zahl1 zuruecksetzen
  zahl1 = 6;

  printf("\ndo-while-Ausgabe:\n");
  do {

    zahl1++;
    printf("ich bin zwischen 5 und 10\n");

  } while (zahl1 > 5 && zahl1 < 10);

  return 0;
}
