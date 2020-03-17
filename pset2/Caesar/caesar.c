/*Este programa encripta un mensaje secreto :D

creditos: Eduardo Atonio Lopez Rostran
09/08/2019
*/

#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    //Argumento
    if (argc != 2)
    {
        printf("Usage: ./caesar k");
        return 1;
    }

    int k = atoi(argv[1]);

    string textoP;
    textoP = get_string("plaintext: ");

    int n;
    n = strlen(textoP);

    printf("ciphertext: ");
    for (int i = 0; i < n; i++)
    {

        //Si es mayuscula
        //Le sumara 65 para colocarse en el inicio del abecedario en l codigo ascii y se le suma la llave
        //Sele restara 65 y se sacara el residuo para saber cuantos se va a correr con respecto al codigo ascii
        if (isupper(textoP[i]))
        {
            printf("%c", (65 + (textoP[i] + k - 65) % 26));
        }

        //Si es minuscula
        if (islower(textoP[i]))
        {
            printf("%c", (97 + (textoP[i] + k - 97) % 26));
        }

        //Si el caracter no es del alfabeto solo lo imprime
        if (!isalpha(textoP[i]))
        {
            printf("%c", textoP[i]);
        }


    }

    printf("\n");
    return 0;
}











