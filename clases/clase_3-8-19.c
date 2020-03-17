/*

*/

/*
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a;

    a = get_int("ingrese la cantidad de numero de niños promedio: ");

    if (a == 2)
    {
        printf("¡Eso es correcto! \n");
    }
    else
    {
        printf("¡Eso es incorrecto!\n");
    }

    return 0;
}

*/


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    n = get_int("ingrese una calificacion: ");

    if(n >= 90)
        printf("Tienes una A\n");

    if(n <= 80 && n >= 90)
        printf("Tienes una B\n");

    if(n <= 70 && n >= 60)
        printf("Tienes una C\n");

    if(n <= 60)
        printf("Tienes una D\n");


    return 0;
}
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    n = 0;

    while(n >= 0)
    {
        n = get_int("Por favor esscriba un numero positivo: ");
    }

    return 0;
}














