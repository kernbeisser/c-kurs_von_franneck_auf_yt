#include <stdio.h>

int bignum(int a, int b) {
  if (a > b)
    return a;
  else if (a < b)
    return b;
  else 
    return 0;
}

int main() {

  int wert1, wert2, big;

  printf("Zahl1 eingeben: "); // der Ton wird rauher...
  scanf("%d", &wert1);

  printf("Zahl2 eingeben: "); // der Ton wird rauher...
  scanf("%d", &wert2);

  big = bignum(wert1, wert2);
  if (big != 0)
    printf("%d ist die groessere der beiden Zahlen\n", big);
  else
    printf("Beide Zahlen haben denselben Wert\n");

  return 0;
}
