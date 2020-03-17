/*
Este programa imprime enpantalla una piramide de #
de maximo 23 altura


creditos: Eduardo Antonio Lopez Rostran
30/09/2019
*/

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //Captura el tamaño
    int tamaño;

    //Revisa si menor de 23 y positivo
    do
    {
        tamaño = get_int("Height: ");

    }
    while (tamaño < 0 || tamaño > 23);

    //Se aumenta 1 para que complete la base que sera siempre
    tamaño++;

    //Se define las variables de dibujo
    int numeral, espacios;

    //Los espacios se igualan al tamaño - 2 ya que este es el numero # del inicio
    espacios = tamaño - 2;

    //Se inicia en dos ya que es lo que son el numero de # con lo que comenzara la piramide
    numeral = 2;

    //Imprime la piramide
    //Se le resta 1 al tamaño por el alto de la piramide
    for (int i = 0; i < tamaño - 1; i++)
    {

        //For de los espacios
        for (int j = 0; j < espacios; j++)
        {
            printf(" ");
        }

        //For de los #
        for (int j = 0; j < numeral; j++)
        {
            printf("#");
        }

        //Se va aumentando los # y disminuyendo los espacios para la forma de la piramide
        espacios--;
        numeral ++;
        printf("\n");
    }


    return 0;
}