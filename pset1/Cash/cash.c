/*
Este programa te da el numero de monedas de tu cambio

Creditos: Eduardo Antonio Lopez Rostran
03/08/19
*/

#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float cambio;
    int monedas;
    monedas = 0;

    //Ciclo para el correcto ingreso del cambio
    do
    {
        cambio = get_float("Change owed: ");

    }
    while (cambio <= 0);

    //Se redondea para poder hacer el conteo
    cambio = roundf(cambio * 100);

    //Mientras el cambio sea mayor a 25 se le restara esta cantidad y las monedas aumentara
    while (cambio >= 25)
    {
        cambio = cambio - 25;
        monedas++;
    }

    //Mientras el cambio sea mayor a 10 se le restara esta cantidad y las monedas aumentara
    while (cambio >= 10)
    {
        cambio = cambio - 10;
        monedas++;
    }

    //Mientras el cambio sea mayor a 5 se le restara esta cantidad y las monedas aumentara
    while (cambio >= 5)
    {
        cambio = cambio - 5;
        monedas++;
    }

    //Mientras el cambio sea mayor a 1 se le restara esta cantidad y las monedas aumentara
    while (cambio >= 1)
    {
        cambio = cambio - 1;
        monedas++;
    }

    printf("%d \n", monedas);

    return 0;

}



