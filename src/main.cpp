#include "Addition.h"


#include <stdio.h>

int main()
{
    int x = 4;
    int y = 5;

    int z1 = Addition::twoValues(x,y);
    printf("\nAddition Result: %d\n", z1);

    return 0;
}
