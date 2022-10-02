#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

#include "battle.h"

////********************************************************////
////    Battle
////********************************************************////

// compare speed
bool Battle::compare_speed(int speed1, int speed2)
{
    int ret;
    if (speed1 >= speed2) {
        ret = true;
    } else {
        ret = false;
    }
    return ret;
}

// damage step
int Battle::damage_step(Status attack_status, Status defense_status)
{
    int damage;
    
    std::cout << attack_status.getName() << " の こうげき" << std::endl;
    sleep(1);

    // 技威力40
    damage = (attack_status.getLevel()*2/5 + 2)*(40*attack_status.getPhysicalAttack()/defense_status.getPhysicalDefense())/50 + 2;
    std::cout << defense_status.getName() << " は ";
    std::cout << damage << " の ダメージ を 受けた" << std::endl;

    return damage;
}

// check hp
bool Battle::check_hp(Status charactor_status)
{
    bool ret;
    if(charactor_status.getHeatPoint() <= 0) {
        ret = false;
    } else {
        ret = true;
    }
    return ret;
}

// attack function
void Battle::battle_phase(Status &supporter_status, Status &enemy_status)
{
    bool first_attack;
    bool battle_phase;
    int damage;

    first_attack = compare_speed(supporter_status.getSpeed(), enemy_status.getSpeed());

    // first attack
    if (first_attack) {
        // supporter attack
        battle_phase = attack_phase(supporter_status, enemy_status);
    } else {
        // enemy attack
        battle_phase = attack_phase(enemy_status, supporter_status);
    }

    // return attack
    if (battle_phase){
        if (!first_attack) {
            // supporter attack
            battle_phase = attack_phase(supporter_status, enemy_status);
        } else {
            // enemy attack
            battle_phase = attack_phase(enemy_status, supporter_status);
        }
    }
}

bool Battle::attack_phase(Status &attacker, Status &defender)
{
    bool ret = true;
    int damage;

    damage = damage_step(attacker, defender);
    defender.setHeatPoint(defender.getHeatPoint() - damage);
 
    if (!check_hp(defender)) {
        ret = false;
    }

    return ret;
}
