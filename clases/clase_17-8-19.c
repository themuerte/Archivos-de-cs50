/*
#include<stdio.h>
#include<cs50.h>


int main(void)
{

    int original[5] = {4, 5, 6, 1, 3};

    int copia[5];

    printf("Arreglo original = 4,5,6,1,3. \n");

    printf("Arreglo copia = ");

    for (int i = 0; i < 5; i++)
    {
        copia[i] = original[i];
        if (i == 4)
        {
            printf("%d.", copia[i]);
        }
        else
        {
            printf("%d,", copia[i]);
        }
    }

    printf("\n");

    return 0;
}
*/

//////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<cs50.h>


int main(void)
{

    int A[3];
    int sum = 0, res = 0, mul = 1;
    float divi = 0;

    for (int i = 0; i < 3; i++)
    {
        A[i] = get_int("ingrese el numero [%d]: ", i + 1);
        sum += A[i];
        mul *= A[i];


        if (i == 0)
        {
            res += A[i];
            divi += A[i];
        }
        else
        {
            res -= A[i];
            divi /= A[i];
        }
    }
    printf("\n");

    printf("Arreglo A = ");
    for (int i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            printf("%d", A[i]);
        }
        else
        {
            printf("%d,", A[i]);
        }
    }

    printf("\n");


    printf("suma: %d \n", sum);
    printf("resta: %d \n", res);
    printf("multiplicacion: %d \n", mul);
    printf("division: %.2f \n", divi);

    return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{

    int A[100];
    int cont = 1;

    printf("\n");
    for (int i = 0; i < 100; i++)
    {
        A[i] = i + 1;


        if (round(i / 24) == cont)
        {
            printf("\n");
            cont++;
        }
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{

    int cont = get_int("ingrese la cantidad a guasrdar: ");
    int A[cont];

    printf("\n");

    for (int i = 0; i < cont; i++)
    {
        A[i] = get_int("ingrese el dato[%d]: ", i);
    }

     printf("orden contrario: ");
     printf("\n");
    for (int i = cont; i > 0; i--)
    {
        printf("%d", A[i - 1]);
        printf("\n");
    }

    return 0;
}






