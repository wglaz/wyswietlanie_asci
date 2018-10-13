#include <stdio.h>

int main(void)
{
   char  y;

    printf("\npodaj liczbę do wyświetlenia: ");

    y = getchar();



    printf("\nLiczba to: %c, Kod ASCI to: %i", y, y);



    return 0;
}
