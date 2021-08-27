#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *fp;

  // Oeffnen zum Schreiben
  fp = fopen("blah.txt", "w");

  if (fp == NULL) {
    fprintf(stderr, "Konnte die Datei nicht oeffnen!\n");
    return EXIT_FAILURE;
  }

  printf("Die Datei konnte geoeffnet werden.\n");

  for (int i = 0; i < 26; i++) {
    fputc(i + 65, fp);
  }

  fclose(fp);

  // Oeffnen zum Lsen
  fp = fopen("blah.txt", "r");

  if (fp == NULL) {
    fprintf(stderr, "Konnte die Datei nicht oeffnen!\n");
    return EXIT_FAILURE;
  }

  char temp;
  for (int i = 0; i < 26; i++) {
    fscanf(fp, "%c", &temp);
    printf("gelesen: %c\n", temp);
  }

  fclose(fp);

  return EXIT_SUCCESS;
}
