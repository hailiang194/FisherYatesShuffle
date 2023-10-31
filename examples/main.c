#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "FisherYatesShuffle.h"

size_t randomPick(size_t count);

int main(void)
{
    srand(time(NULL));
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < 10; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    suffle(a, 10, sizeof(int), randomPick);

    for(int i = 0; i < 10; ++i)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

size_t randomPick(size_t count)
{
    return (rand() * 1.0 / RAND_MAX) * count;
}