#ifndef AF_CPP
#define AF_CPP

#include "af.h"

void ArraysSum (int ArrayData_first[][size_Y], int ArrayData_second[][size_Y])
{
    printf("Arrays summary:");
    for (int x = 0; x < size_X; x++)
    {
        for (int y = 0; y < size_Y; y++)
            printf ("%d ", ArrayData_first[x][y] + ArrayData_second[x][y]);
        printf("\n");
    }
    printf("\n");
}

//----------------------------------------------------------------------------

void PrintRectangular (int ArrayData[][size_Y])
{
    printf("Your array:\n");
    for (int x = 0; x < size_X; x++)
    {
        for (int y = 0; y < size_Y; y++)
            printf ("%d ", ArrayData[x][y]);
        printf("\n");
    }
    printf("\n");
}

//----------------------------------------------------------------------------

#endif
