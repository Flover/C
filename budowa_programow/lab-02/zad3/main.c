#include <stdio.h>

#include "rok_narodzin.h"
#include "rok_obecny.h"

int main() {
int i, a, j, leap;
a=0;
i=rok_narodzin();
j=rok_obecny();


 while (i <= j) {
if (leap = i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
a += 31622400;
} else {
a += 31536000;
}
i++;
    }


printf("Twoja egzystencja trwa: %i sekund \n", a);
}


