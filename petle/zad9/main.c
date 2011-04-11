#include <stdio.h>
#include <stdlib.h>

#include "lib.h"

int main(int argc, char *argv[])
{
    FILE *in_handle;

    in_handle = fopen(argv[1], "r");

    przetworz(&in_handle);

    return EXIT_SUCCESS;
}
