#include <stdio.h>

const int size_X = 5;
const int size_Y = 4;

void PrintRectangular (int ArrayData[][size_Y], int size_X, int size_Y);

//--------------------------------------------------------------------

int main ()
{
    int ArrayData[][size_Y] =  {{11, 12, 13, 14},
                                {21, 22, 23, 24},
                                {31, 32, 33, 34},
                                {41, 42, 43, 44},
                                {51, 52, 53, 54}};

    PrintRectangular (ArrayData, size_X, size_Y);
}


//--------------------------------------------------------------------

void PrintRectangular (int ArrayData[][size_Y], int size_X, int size_Y)
{
    for (int x = 0; x < size_X; x++)
    {
        for (int y = 0; y < size_Y; y++)
            printf ("%d ", ArrayData[x][y]);
        printf("\n");
    }
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------
//--------------------------------------------------------------------
