// Helper functions for music

#include <cs50.h>
#include <math.h>
#include "helpers.h"
#include <ctype.h>
#include <string.h>

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int dur, x, y;

    //Oteniendo el numerador y denominador
    x = atoi(&fraction[0]);
    y = atoi(&fraction[2]);

    //Se multiplica por 8 por las octvas
    dur = (8 * x) / y;

    return dur;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    //string NOTES[] = {"C", "C#", "D", "D#", "E", "F","F#", "G", "G#", "A", "A#", "B"  };

    float res;
    int fre = 0;
    res = 0;

    //identificamos cuanto se va a correr con respecto al pivote "A"
    switch (note[0])
    {
        case 'C':
        {
            res = -9;
            break;
        }

        case 'D':
        {
            res = -7;
            break;
        }

        case 'E':
        {
            res = -5;
            break;
        }

        case 'F':
        {
            res = -4;
            break;
        }

        case 'G':
        {
            res = -2;
            break;
        }

        case 'A':
        {
            res = 0;
            break;
        }

        case 'B':
        {
            res = 2;
            break;
        }

    }

    //si notes[2] es una nota sostenida se le sumara 1
    if (note[1] == '#')
    {
        res++;
    }
    else
    {
        //si notes[2] es una nota sostenida se le resta 1
        if (note[1] == 'b')
        {
            res--;
        }
        else
        {
            //cuanta los espacios corrido con respecto a la octyava principal
            res = res + (atoi(&note[1]) - 4) * 12;
        }
    }

    if (isalnum(note[2]))
    {
        //cuanta los espacios corrido con respecto a la octyava principal
        res = res + (atoi(&note[2]) - 4) * 12;
    }

    //aplicando la formula y redondeamos al entero mas cercano
    return round(pow(2.0, (float)res / 12.0) * 440);

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    bool esp;
    esp = false;

    //Si s @ que es un espacio devuelva true
    if (strcmp(s, "") == 0)
    {
        esp = true;
    }

    return esp;
}
