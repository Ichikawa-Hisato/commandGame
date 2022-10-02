#include <iostream>
#include <thread>
#include <memory>
#include <unistd.h>
#include "status.h"
#include "battle.h"
using namespace std;

void view_status(string name, Status status);

int main()
{
    Status hero_status;
    hero_status.setName("hero");

    Status devil_status;
    devil_status.setName("devil");

    Battle battle;
    int damage;

    view_status("Hero", hero_status);

    std::cout << std::endl;

    view_status("Devil", devil_status);
    sleep(1);

    std::cout << std::endl;
    // damage = battle.damage_step(devil_status, hero_status);
    // hero_status.setHeatPoint(hero_status.getHeatPoint() - damage);
    battle.battle_phase(devil_status, hero_status);

    std::cout << std::endl;
    view_status("Hero", hero_status);
    std::cout << std::endl;
    view_status("Devil", devil_status);
}

void view_status(string name, Status status)
{
    std::cout << name << " Status Level   : " << status.getLevel() << std::endl;
    std::cout << name << " Status Heat    : " << status.getHeatPoint() << std::endl;
    std::cout << name << " Status attack  : " << status.getPhysicalAttack() << std::endl;
    std::cout << name << " Status defense : " << status.getPhysicalDefense() << std::endl;
}
