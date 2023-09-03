#include <fileioc.h> //Saving game state after closing.
#include "main.h"

int checkForSavedGame()
{
    ti_var_t save = ti_Open("SITSURV","r");

    if (save == 0) {return 0;}

    ti_Close(save);
    return 1;
}

int SaveGame(struct entityInfo entity, int randomSeed) //Take in game data here
{
    ti_var_t save = ti_Open("SITSURV","w");

    

    ti_Close(save);
    return 1;
}