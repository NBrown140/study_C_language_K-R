
#include <stdio.h>

// Write a program to print the corresponding celcius to farenheit table

main()
{
    printf("Celcius Farenheit\n");
    for (int celcius = -20; celcius <= 150; celcius += 10)
        printf("  %3d     %6.1f\n", celcius, (celcius*9.0/5.0)+32);
}