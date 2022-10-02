#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "status.h"

////********************************************************////
////    battle
////********************************************************////

class Battle
{
public:
    // compare speed
    bool compare_speed(int speed1, int speed2);

    // damage step
    int damage_step(Status attack_status, Status defense_status);

    // check hp
    bool check_hp(Status charactor_status);

    // attack function
    void battle_phase(Status &supporter_status, Status &enemy_status);
    bool attack_phase(Status &attacker, Status &defender);
};
