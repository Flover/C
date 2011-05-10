#include <stdio.h>

int main()
{

    int t[] = { 2, 8, 1, 3 };
    int *a[4];

    int i, j;

    for (i = 0; i < 4; i++) {
	printf(" %d ", t[i]);
    }
    printf("\n");

    for (i = 0; i < 4; i++) {
	a[i] = &t[i];
    }

    for (i = 0; i < 4; i++) {
//      t[i];
	for(j = i + 1; j<4; j++){
		if( *a[i] > *a[j]){
		int* temp;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
    }
}

    //a[0]=&t[2];
    //a[1]=&t[0];
    //a[2]=&t[3];
    //a[3]=&t[1];

    //wyniki
    for (i = 0; i < 4; i++) {
	printf(" %d ", *a[i]);
    }
    printf("\n");
    return 0;
    
}
