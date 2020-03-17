
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        fprintf(stderr, "Usage: ./resize n infile outfile\n");
        return 1;
    }

    // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    //-------------------------------------------------------------------------------------------------//
    int tam = atoi(argv[1]);

    if (tam < 0 && tam <= 100)
    {
        fprintf(stderr, "Tamaño incorrecto\n");
        return 2;
    }
    //--------------------------------------------------------------------------------------------------//

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 3;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 4;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }


    // determine padding for scanlines
    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    //creo las nuevas cabeceras ylas igualos a las del bmp a agrandar
    BITMAPFILEHEADER Rbf = bf;
    BITMAPINFOHEADER Rbi = bi;

    //agrego a los tamaños originales cuanto se van a agrandar
    Rbi.biWidth *= tam;
    Rbi.biHeight *= tam;

    //calculo el nuevo padding
    int R_padding = (4 - (Rbi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    //calculo lon nuevos tamaños
    Rbi.biSizeImage = (sizeof(RGBTRIPLE) * Rbi.biWidth + R_padding) *  abs(Rbi.biHeight);
    Rbf.bfSize = Rbi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);

    // write outfile's BITMAPFILEHEADER
    fwrite(&Rbf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&Rbi, sizeof(BITMAPINFOHEADER), 1, outptr);



    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)
    {

        //largo
        for (int x = 0; x < tam; x++)
        {

            // iterate over pixels in scanline
            for (int j = 0; j < bi.biWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;


                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                // write RGB triple to outfile
                for (int z = 0; z < tam; z++)
                {
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }


            }



            // skip over padding, if any
            fseek(inptr, padding, SEEK_CUR);

            // then add it back (to demonstrate how)
            for (int k = 0; k < R_padding; k++)
            {
                fputc(0x00, outptr);
            }

            //me regreso al aterior fila para poder dibujarla de nuevo
            fseek(inptr, ((bi.biWidth) * sizeof(RGBTRIPLE) + padding) * -1, SEEK_CUR);

        }

        //salto al siguiente fila
        fseek(inptr, bi.biWidth * sizeof(RGBTRIPLE) + padding, SEEK_CUR);



    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}

//https://docs.cs50.net/2017/fall/psets/4/resize/less/resize.html


