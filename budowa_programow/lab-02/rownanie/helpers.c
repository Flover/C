#include <stdio.h>

float a, b, x;
void wczytaj_dane(void)
{
    printf("Podaj liczbe a: ");
    scanf("%f", &a);
    printf("Podaj liczbe b: ");
    scanf("%f", &b);
}
void oblicz_rownanie(void)
{
    x = b / a;
}

void wypisz_wynik(void)
{
    printf(" W rownaniu %f * x = %f zmienna x = %f\n", a, b, x);
}
