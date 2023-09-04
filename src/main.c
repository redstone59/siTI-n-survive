#pragma once

#include "main.h"

int updatePressedKey(uint8_t *key, uint8_t *keyPrev, bool *gameRunning)
{
	keyPrev = key;
	key = os_GetCSC();

	if (key == keyPrev) {return 1;}
	else if (key == sk_Clear) {gameRunning = false;}; //Reimplement this so that this gets checked for every frame (is there such thing?)
	return 0;
}

int main(void)
{
	uint8_t key = os_GetCSC();
	uint8_t keyPrev;
	bool gameRunning = true;

//restart:

	// Difficulty select screen here

	struct entityInfo player = 
	{
		99, 
		99,
		99,
		100,
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
		0, 
		0,
		false,
		false
	};
	int day = 1;

	os_ClrHome();

	while (gameRunning)
	{
		/*
		 * How would I implement updatePressedKey for the two phases??
		 * I could just reinitalize key and keyPrev and pass the pointer for gameRunning to the phases
		 * but that feels a lil silly???
		 * 
		 * Or if I could somehow pass goto exit from another file that would be neato
		 */
		updatePressedKey(&key, &keyPrev, &gameRunning);

		purchasePhase(&player);

		survivePhase(&player,day);

		player.dollar += 50 * day;
		day++;
	};

	//Game over screen logic here

exit:

	//Implement save game logic here
	//could exit: to use gotos but who knows, will remove if not useful

	return 0;
}
