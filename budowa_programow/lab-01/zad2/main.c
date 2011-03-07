#include<math.h>
#include<stdio.h>

#include "helpers.h"

int main()
{
  double x, p;
  double sqrt(double x);
  x = pobierz_rzeczywista();
  p = sqrt(x);
  if( x >= 0){
    printf("Pierwiastek z %f = %f \n", x, p);
  }
  else{
    printf("Fatal Error!\n");
  }
  return 0;
}
