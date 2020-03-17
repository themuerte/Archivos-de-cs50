/*#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    string pokemon[5];

    srand(time(NULL));
    int ran = rand() % 6;

    for(int i = 0; i < 5; i++)
    {
        pokemon[i] = get_string("Dame un pokemon: ");
    }

    printf("%s, ¡yo te elijo! \n",pokemon[ran]);

    return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arroz[5];

    int pro = 0;

    for(int i = 0; i < 5; i++)
    {
        arroz[i] = get_int("Dame un entero: ");

        pro += arroz[i];
    }
    pro = pro / 5;

    printf("promedio: %d \n",pro);

    return 0;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////
/*

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n = get_int("ingrese el tamaño de los arreglos: ");

    int arroz1[n];
    int arroz2[n];

    bool con = false;

    printf("Arreglo A \n");
    for(int i = 0; i < n; i++)
    {
        arroz1[i] = get_int("Digite el elemento[%d]: ",i + 1);
    }

    printf("Arreglo B \n");
    for(int i = 0; i < n; i++)
    {
        arroz2[i] = get_int("Digite el elemento[%d]: ",i + 1);
    }

    for(int i = 0; i < n; i++)
    {
        if(arroz2[i] != arroz1[i])
        {
            printf("Los arreglos no son iguales \n");
            break;
        }

        if(i + 1 == n)
        {
            con = true;
        }

    }

    if(con)
    printf("Los arreglos son iguales \n");



    return 0;
}
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int f = get_int("ingrese el numero de filas: ");
    int c = get_int("ingrese el numero de filas: ");

    int arroz[f][c];

    int sumF[f];
    int sumC[c];

    for(int i = 0; i < f; i++)
    {
        for(int j = 0; j < c; j++)
        {
           arroz[i][j] = get_int("Elemento [%d][%d]: ",i + 1,j + 1);
        }
    }

    for(int i = 0; i < f; i++)
    {
        for(int j = 0; j < c; j++)
        {
           arroz[i][j]
        }
    }

    return 0;
}

































