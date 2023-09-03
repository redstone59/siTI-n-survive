#pragma once

#include <stdbool.h>

const enum Items //remove later probably
{
    None,
	Bandage,
    Water_Bottle,
    Sandwich,
    Bug_Spray,
    Bug_Net,
    Berry_Bush,
    RainCatcher,
    Bunny_Snare,
    Anti_Venom,
    Snake_Trap,
    Bear_Trap,
    Umbrella,
    Cold_Medicine,
    Bug_Zapper,
    Decoys,
    Lighting_Rod,
    Bat_Bait,
    First_Aid_Kit,
    Ice_Cold_Soda,
    AutoSlingshot,
    Heat_Lamp,
    WaterPurifier,
    Zombie_Zapper,
    Iron_Umbrella,
    StrmSatellite,
    Moat,
    Black_Light,
    Moon_Base
};

const char *itemNames[28] =
{
    "Bandage",
    "Water Bottle",
    "Sandwich",
    "Bug Spray",
    "Bug Net",
    "Berry Bush",
    "RainCatcher",
    "Bunny Snare",
    "Anti-Venom",
    "Snake Trap",
    "Bear Trap",
    "Umbrella",
    "Cold Medicine",
    "Bug Zapper",
    "Decoys",
    "Lighting Rod",
    "Bat Bait",
    "First Aid Kit",
    "Ice Cold Soda",
    "AutoSlingshot",
    "Heat Lamp",
    "WaterPurifier",
    "Zombie Zapper",
    "Iron Umbrella",
    "StrmSatellite",
    "Moat",
    "Black Light",
    "Moon Base"
};

const int itemPrices[28] =
{
    10,
    10,
    10,
    20,
    30,
    50,
    50,
    30,
    30,
    50,
    150,
    50,
    25,
    200,
    100,
    150,
    100,
    100,
    75,
    250,
    125,
    225,
    250,
    300,
    350,
    300,
    400,
    500
};

const enum Events
{
	Bugs,
    Rain,
    Bunny,
    Bear,
    Snake,
    AcidRain,
    Tornado,
    Lightning,
    Zombies,
    Bats,
    Ghosts,
    Meteors,
    Robots
};

const enum Disasters
{
	BugSwarm,
    BugSmall,
    Rain,
    Snow,
    Hot,
    Snake,
    Bunny,
    Bear,
    u1,
    u2,
    Zombie,
    Tornado,
    u3,
    u4,
};

struct entityInfo
{
	int health;
    int hunger;
    int thirst;

	int dollar;
	int itemDurability[28];

    int hot;
    int cold;
    bool sick;
    bool venom;
};
