#include <stdio.h>

bool Menu (unsigned int ChoiseNum);

//----------------------------------------------------------

void main ()
{
    Menu();
}

void Menu (unsigned int ChoiseNum)
{
    printf ("###########################\n"
            "######  ###################\n"
            "#####    ##################\n"
            "##### ## ############## ###\n"
            "####      #######   ##   ##\n"
            "###  ####  ###### ##### ###\n"
            "##  ######  ## ## ##### ###\n"
            "###########################\n\n");

    printf ("ARRAY LAB \n"
            "Dolgopa City, 2024 \n");
    printf ("All rights reserved.\n\n\n");

    printf ("Choose mode: \n"
            "1 for Rectangular array samples\n"
            "2 for Triangular array samples\n");

    ModeSwitcher(int ChoiseNum);
}


void

