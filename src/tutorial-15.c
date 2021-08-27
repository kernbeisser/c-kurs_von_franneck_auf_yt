#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b = 5;
    int *a;
    a = &b;

    printf("Speicheradresse von b: %p\n", &b);
    printf("Speicheradresse von a: %p\n", &a);
    
    // Der _Wert_ von a ist die _Speicheradresse_ von b!
    printf("Der Wert von a ist die Speicheradresse von b: %p\n", a);

    // Den Wert, auf welchen a zeigt, bekommt man mit *a:
    // Man _Dereferen
    printf("Wert, auf den a zeigt: %d\n", *a);

    return EXIT_SUCCESS;
}
