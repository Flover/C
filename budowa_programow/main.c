#include <stdio.h>
#include <stdlib.h>

/* program testujacy funkcje */

#include "wyznacznik.h"
#include "wczytaj_macierz.h"

int n;

int main()
{
    wczytaj_wymiar_macierzy(n);
    float macierz[n][n];
    wczytaj_macierz(n, macierz);

    printf("%f", wyznacznik(n, macierz));
    printf("\n");

    return EXIT_SUCCESS;
}
