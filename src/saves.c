#include <fileioc.h> //Saving game state after closing.
#include "main.h"

size_t readSavedGame()
{
    ti_var_t save = ti_Open("SITSURV","r");

    if (save == 0) {return 0;}

    size_t save_data;
    ti_Read(&save_data, ti_GetSize(save), 5, save);

    ti_Close(save);
    return save_data;
}

int SaveGame(struct entityInfo entity, int randomSeed) //Take in game data here
{
    ti_var_t save = ti_Open("SITSURV","w");

    

    ti_Close(save);
    return 1;
}