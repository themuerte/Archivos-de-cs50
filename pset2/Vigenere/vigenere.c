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

    string k = argv[1];


    //Revise si la llave no tre caracteres que no sean alfa numericos
    for (int i = 0; i < strlen(k); i++)
    {
        if (!isalpha(k[i]))
        {
            return 1;
        }
    }
    string textoP;
    textoP = get_string("plaintext: ");


    int n, res;
    n = strlen(textoP);


    int cont = 0;

    printf("ciphertext: ");
    for (int i = 0; i < n; i++)
    {
        //Si es mayuscula
        //Le sumara 65 para colocarse en el inicio del abecedario en l codigo ascii
        //Se usa toupper en la llave para obtener la mayuscula del dato y se le resta 65 ya que es mayusula y asi obtener el numero
        //Sele restara 65 y se sacara el residuo para saber cuantos se va a correr con respecto al codigo ascii
        if (isupper(textoP[i]))
        {
            printf("%c", (65 + (textoP[i] + (toupper(k[cont]) - 65) - 65) % 26));
        }

        //Si es minuscula
        if (islower(textoP[i]))
        {
            printf("%c", (97 + (textoP[i] + (toupper(k[cont]) - 65) - 97) % 26));
        }

        //Si el caracter no es del alfabeto solo lo imprime
        if (!isalpha(textoP[i]))
        {
            printf("%c", textoP[i]);
        }


        cont++;
        //Si el caracter no es del alfabeto resta al contador para que no afecte la rotacion de la llave
        if (!isalpha(textoP[i]))
        {
            cont--;
        }
        //Si el contador alcanzo el tamaño de la llave la iguala a 0 para que valla rotando
        if ((strlen(k)) == cont)
        {
            cont = 0;
        }



    }

    printf("\n");
    return 0;
}


