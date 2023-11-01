#include "./FisherYatesShuffle.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BYTES_TYPE unsigned char *

void suffle(void* ptr, size_t count, size_t size, size_t(*pick)(size_t))
{
    BYTES_TYPE temp = (BYTES_TYPE)malloc(size);
    BYTES_TYPE bytes = (BYTES_TYPE)ptr;

    //for(int i = count - 1; i >= 0; --i)
    for(unsigned char* current = bytes + ((count - 1) * size); current != bytes; current -= size)
    {
        size_t pickIndex = (*pick)((size_t)((current - bytes) / size));
        BYTES_TYPE pick = bytes + (pickIndex * size); 
        if(pick == current)
            continue;

        memcpy(temp, current, size);
        memcpy(current, pick, size);
        memcpy(pick, temp, size);
    }

    free(temp);
}