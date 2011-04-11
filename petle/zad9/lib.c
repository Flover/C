#include <stdio.h>
#include <stdlib.h>

void oblicz_koszt(unsigned int km, double litr, double koszt)
{
    double s;
    s = (litr / (km / 100)) * koszt;
    printf("Koszt przejechania 100 km to %.2lfPLN \n", s);
}

void oblicz_zuzycie(unsigned int km, double litr, double koszt)
{
    double s;
    s = (litr / (km / 100));
    printf("Srednie zuzycie paliwa na 100km to %.2lfL \n", s);
}

void tankowanie(unsigned int ui, double x, double y, int i)
{
    printf("\nTaknowanie nr %i. \n", i);
    oblicz_zuzycie(ui, x, y);
    oblicz_koszt(ui, x, y);
}

void podsumowanie(unsigned int km, double litr, double koszt, double cena, int i)
{
    printf("\nPODSUMOWANIE \n");
    printf("Przejechano %u km \nZuzyto %.2lfL paliwa \nKoszt calkowity wynosi %.2lfPLN \n", km, litr, koszt);
    oblicz_zuzycie(km, litr, koszt);
    oblicz_koszt(km, litr, cena / i);
}

void przetworz(FILE ** in_handle)
{
    unsigned int ui, km = 0;
    double x, y, litr = 0, koszt = 0, cena = 0;
    char bufor[BUFSIZ];
    int kom, i = 0;

    if (*in_handle != NULL) {

	while (fgets(bufor, BUFSIZ, *in_handle) != NULL) {

	    kom = sscanf(bufor, "%u %lf %lf", &ui, &x, &y);
	    if (kom == 3) {
		i++;
		cena += y;
		km += ui;
		litr += x;
		koszt += (x * y);
		tankowanie(ui, x, y, i);
	    }
	}
	fclose(*in_handle);
	podsumowanie(km, litr, koszt, cena, i);
    }
}
