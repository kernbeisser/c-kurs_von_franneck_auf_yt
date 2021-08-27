#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Adresse {
  char Name[200];
  char Ort[200];
  int Anzahl_der_eintraege;
  char Geburtsdatum[100];
};

int main() {
  struct Adresse Namen;

  Namen.Anzahl_der_eintraege = 1;
  strcpy(Namen.Name, "");
  strcpy(Namen.Ort, "");
  strcpy(Namen.Geburtsdatum, "");

  printf("Anzahl: ");
  scanf("%d", &Namen.Anzahl_der_eintraege);
  printf("Name: ");
  scanf("%s", Namen.Name);
  printf("Ort: ");
  scanf("%s", Namen.Ort);
  printf("Geburtsdatum: ");
  scanf("%s", Namen.Geburtsdatum);

  printf("\nDas hast du eingeeben:\n\n");

  printf("Anzahl: %d ", Namen.Anzahl_der_eintraege);
  printf("\nName: %s ", Namen.Name);
  printf("\nOrt: %s ", Namen.Ort);
  printf("\nGeburtsdatum: %s\n", Namen.Geburtsdatum);

  return EXIT_SUCCESS;
}
