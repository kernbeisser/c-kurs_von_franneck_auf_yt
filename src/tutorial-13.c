#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buch[100];
    int groesse;

    printf("Gib einen Text ein: ");
    fgets(buch, 100, stdin);
    
    groesse = strlen(buch);
    printf("Du hast %d Zeichen eingegeben.\n", groesse);

    // die dos fuzzies muessen hier 
    // system("PAUSE");
    // eingeben :P

    return EXIT_SUCCESS;
}
