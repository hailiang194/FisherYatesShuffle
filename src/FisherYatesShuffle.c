#include "./FisherYatesShuffle.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void suffle(void* ptr, size_t count, size_t size, size_t(*pick)(size_t))
{
    unsigned char *temp = (unsigned char *)malloc(size);
    unsigned char *bytes = (unsigned char*)ptr;

    for(int i = count - 1; i >= 0; --i)
    {
        size_t pickIndex = (*pick)((size_t)i);
        if(pickIndex == i)
            continue;

        memcpy(temp, bytes + (i * size), size);
        memcpy(bytes + (i * size), bytes + (pickIndex * size), size);
        memcpy(bytes + (pickIndex * size), temp, size);
    }

    free(temp);
}