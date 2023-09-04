#include "main.c"

void survivePhase(struct entityInfo *entity,int day)
{
	int i,spawn;
	for (i=0;i<day;i++)
	{
		enum Disasters disaster = Random(day + 1) + ( Random(11) / 10 ) + ( Random(11) / 10 );
		switch (disaster)
		{
			case BugSwarm:
			case BugSmall:
				if (disaster == BugSwarm) {spawn = 3 + Random(3) + day / 2;}
				else {spawn = 10 + Random(3);};

				break;
			case Rain:
			case AcidRain:
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
			case Zombie:
				//TODO: implement
				break;
			case Tornado:
				//TODO: implement
				break;
			case Bats:
				//TODO: implement
				break;
			case Ghosts:
				//TODO: implement
				break;
			case Meteors:
				//TODO: implement
				break;
			case Robots:
				//TODO: implement
				break;
		}
	}
}
