#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[10];
    int array2[10];

    for (int i = 0; i < 10; i++) {
        array1[i] = i;
        array2[i] = i;
    }

    array2[9] = 30;

    for (int i = 0; i < 10; i++) {
        if (array1[i] == array2[i]) {
            continue;
        }
        else {
            printf("Unterschied an Position %d\n", i);
            break;
        }
    }

    // alternative Array-Initialisierung:
    int array3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Groesse eines Array ermitteln:
    printf("Anzahl der Elemente: %lu\n", sizeof(array3) / sizeof(int));

    return EXIT_SUCCESS;
}
