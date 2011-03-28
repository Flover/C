#include <stdio.h>

void szachownica(){
  int i,j;
  for (i=1; i<=8; i++){
    if (i % 2 == 0 ){
      putchar(' ');
    }
    for (j=1; j<=8; j++){
      putchar('*');
      if (j != 8){
        putchar(' ');
      }
    }
    putchar('\n');
  }
}
