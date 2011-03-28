#include <stdio.h>
#include "lib.h"

int
main ()
{

  float tab[6];

  wczytaj (tab);
  sortuj (tab);
  wypisz (tab);
  return 0;
}
