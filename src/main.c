#include <stdio.h>
#include <debug.h>
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <sys/util.h>

#include "main.h"
#include "saves.c"
#include "gfx/graphics.c"

#define Random(n) randInt(1,n)

void update(uint8_t key, struct entityInfo *entity) //remove
{
	
}

void purchasePhase(struct entityInfo *entity)
{

}

void survivePhase(struct entityInfo *entity,int day)
{
	int i;
	for (i=0;i<day;i++)
	{
		enum Disasters disaster = Random(day + 1) + ( Random(11) / 10 ) + ( Random(11) / 10 );
		switch (disaster)
		{
			case BugSwarm:
			case BugSmall:
				int bugs;
				if (disaster == BugSwarm) {bugs = 3 + Random(3) + day / 2;}
				else {bugs = 10 + Random(3);};

				break;
			case Rain:
				//TODO: implement
				break;
			case Snow:
				//TODO: implement
				break;
			case Hot:
				//TODO: implement
				break;
			case Snake:
				if (entity->itemDurability[Snake_Trap] != 1)
				{
					entity->venom += 20+Random(30);
				}
				else
				{
					entity->hunger += 30;
				}
				break;
			case Bunny:
				//TODO: implement
				break;
			case Bear:
				//TODO: implement
				break;
			case 8:
				//TODO: implement
				break;
			case 9:
				//TODO: implement
				break;
			case Zombie:
				//TODO: implement
				break;
			case Tornado:
				//TODO: implement
				break;
			case 12:
				//TODO: implement
				break;
			case 13:
				//TODO: implement
				break;
		}
	}
}

int main(void)
{
	uint8_t key = os_GetCSC();
	uint8_t key_prev;

	// Difficulty select screen here

	struct entityInfo player = {99,99,99,100,0,0,0,false,false};
	int day = 1;

	os_ClrHome();

	while (1)
	{
		key_prev = key;
		key = os_GetCSC();

		if (key == key_prev) {continue;}
		else if (key == sk_Clear) {break;};

		purchasePhase(&player);

		survivePhase(&player,day);

		player.dollar += 50 * day;
		day++;
	};

exit:

	//Implement save game logic here
	//could exit: to use gotos but who knows, will remove if not useful

	return 0;
}
