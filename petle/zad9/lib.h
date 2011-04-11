#include <stdio.h>
#include <stdlib.h>

void oblicz_koszt(unsigned int km, double litr, double koszt);

void oblicz_zuzycie(unsigned int km, double litr, double koszt);

void tankowanie(unsigned int ui, double x, double y, int i);

void podsumowanie(unsigned int km, double litr, double koszt, double cena,
		  int i);

void przetworz(FILE ** in_handle);
