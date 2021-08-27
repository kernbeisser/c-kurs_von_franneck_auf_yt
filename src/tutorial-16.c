#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

void kreisflaeche(float* radius)
{
    *radius = (*radius) * (*radius) * PI;
}

int main()
{
    float radius;

    printf("Berechnung einer Kreisfläche\n\n");
    printf("Bitte den Radius eingeben: ");
    scanf("%f", &radius);

    kreisflaeche(&radius);

    printf("Die Kreisfläche beträgt: %f\n", radius);

    return EXIT_SUCCESS;
}
