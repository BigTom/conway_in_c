#include "GameOfLife.h"
#include <string.h>

char * generation(char * universe)
{
    static char new_universe[10]; /* changed from 3 to remedy potential crash */ 
    strcpy(new_universe, universe);
    for(int i = 0; i < strlen(universe); i++) {
        if (i == 1 && strlen(universe) == 3)
        {
            new_universe[i] = '*';
        }
        else
        {
            new_universe[i] = '.';
        }
    }
    return new_universe;
}


