/*
clase del dia 27-7-19 se vio comandos de la terminal y introducion a c
*/

/*
#include <stdio.h>

int main(void)
{

printf("hola mundo");

return 0;
}
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//suma por funciones
/*
#include <stdio.h>
#include <cs50.h>

int suma(int a, int b);

int main(void)
{
    int a, b;

    printf("ingrese el primer numero: \n");
    a=get_int("");
    printf("ingrese el segundo numero: \n");
    b=get_int("");

    printf("la suma es: %d \n",suma(a,b));


    return 0;
}

int suma(int a,int b)
{
    return a + b;
}
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//suma por funciones con numeros negtivos
/*
#include <stdio.h>
#include <cs50.h>

int suma(int a, int b);

int main(void)
{
    int a, b;

    printf("ingrese el primer numero: \n");
    a=get_int("");
    printf("ingrese el segundo numero: \n");
    b=get_int("");

    printf("la suma es: %d \n",suma(a,b));


    return 0;
}

int suma(int a,int b)
{
    int suma;

    if(a > 0)
    {
        for(int i=0 ; )
    }
    else
    {

    }
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//validacion de triangulo
/*
#include <stdio.h>
#include <cs50.h>

bool validacion(float a, float b, float c);

int main(void)
{
    float a, b, c;

    a = get_float("Ingrese el primer lado: ");
    b = get_float("Ingrese el segundo lado: ");
    c = get_float("Ingrese el tercer lado: ");

    if (validacion(a, b, c))
    {
        printf("Es un triangulo \n");
    }
    else
    {
        printf("No es un triangulo \n");
    }


    return 0;
}

bool validacion(float a, float b, float c)
{
    bool validacion;

    validacion = false;

    if ((a + b) > c)
    {
        if ((a + c) > b)
        {
            if ((b + c) > a)
            {
                validacion = true;
            }
        }
    }
    else
    {
        validacion = false;
    }

    return validacion;
}

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<cs50.h>

int main (void)
{
    long long a;






    return 0;
}























