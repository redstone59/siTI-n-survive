#include "main.c"

int *getMenuList(int selectedValue)
{
    int i,values[5];
    for (i=-2;i<2;i++)
    {
        values[i + 2] = (selectedValue + i) % 28;
    }
    return values;
}

int purchasePhase(struct entityInfo *entity, uint8_t *key, uint8_t *keyPrev, bool *gameRunning)
{
	int visibleItems[5] = getMenuList(3);

    while (gameRunning)
    {
        if (updatePressedKey(&key,&keyPrev,&gameRunning)) {continue;};

        
    }

    return 1;
}