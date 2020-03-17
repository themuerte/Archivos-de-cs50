#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image");
        return 1;
    }

    //abro la memoria
    FILE *memoria = fopen(argv[1], "r");
    FILE *img = NULL;

    int cont = 0;

    bool jpg_enco = false;

    unsigned char buffer[512];

    //leo de memoria 512 BYTE
    while (fread(buffer, 512, 1, memoria))
    {
        //si los BYTE coincide con los de un jpg
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //Cierro la anterior imagen
            if (jpg_enco)
            {
                fclose(img);
            }

            //valido que encontro la imagen
            jpg_enco = true;


            char filename[8];
            sprintf(filename, "%03i.jpg", cont);
            img = fopen(filename, "w");
            cont++;

        }

        //escribo los 512 BYTE
        if (jpg_enco)
        {
            fwrite(&buffer, 512, 1, img);
        }



    }


    //cierro loos archivos
    fclose(memoria);
    fclose(img);

    return 0;
}








