#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <setjmp.h>

#include <debug.h>
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <sys/util.h>

#include "saves.c"
#include "gfx/graphics.c"
#include "purchase.c"
#include "survival.c"

#define Random(n) randInt(1,n)

enum Items //remove later probably
{
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

const int purchaseDurabilities[28] =
{
    1,
    1,
    1,
    3,
    30,
    10,
    50,
    1,
    2,
    1,
    3,
    50,
    2,
    100,
    0b11,
    30,
    15,
    1,
    4,
    100,
    8,
    300,
    100,
    500,
    7,
    6,
    100,
    50
};

enum Disasters
{
    BugSwarm = 1,
    BugSmall,
    Rain,
    Snow,
    Hot,
    Snake,
    Bunny,
    Bear,
    Lightning,
    AcidRain,
    Zombie,
    Tornado,
    Bats,
    Ghosts,
    Meteors,
    Robots
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
