
#include <stdio.h>

// Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0

main()
{
    printf("Farenheit Celcius\n");
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("  %3d     %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}