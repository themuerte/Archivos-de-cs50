// Implements a dictionary's functionality

#include <stdbool.h>

#include "dictionary.h"

typedef struct nod
{
    bool is_word;
    struct node *nino[27];
}
node;



// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    //abrimos el diccionario
    FILE *file = fopen(dictionary,"r");

    if(file == null)
    {
        return false;
    }

    node *root;

    while (fscanf(file,"%s",word) != EOF)
    {
        for ()
        {

        }
    }



    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    return false;
}
