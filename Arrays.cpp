#include <stdio.h>
#include "af.h"

int main ()
{
    int Array_Alpha[][size_Y] =  {{11, 12, 13, 14},
                                      {21, 22, 23, 24},
                                      {31, 32, 33, 34},
                                      {41, 42, 43, 44},
                                      {51, 52, 53, 54}};

    int Array_Omega[][size_Y] = {{61, 62, 63, 64},
                                      {71, 72, 73, 74},
                                      {81, 82, 83, 84},
                                      {91, 92, 93, 94},
                                      {101, 102, 103, 104}};

    PrintRectangular (Array_Alpha);
    PrintRectangular (Array_Omega);
    ArraysSum (Array_Alpha, Array_Omega);
}
