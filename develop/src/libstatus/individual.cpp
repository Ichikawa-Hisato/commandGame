#include <iostream>
#include <string>
using namespace std;

#include "individual.h"

////********************************************************////
////    Individual
////********************************************************////


void Individual::readIndividualStatus(std::string name)
{
    indiStatTbl.push_back({"hero", 10, 10, 5, 3, 5, 10});

    std::cout << "readIndividualStatus::" << name << std::endl;

    for (auto indiStat : indiStatTbl) {
        if (name == indiStat.name) {
            heat_point = indiStat._heat_point;
            physical_attack = indiStat._physical_attack;
            physical_defense = indiStat._physical_defense;
            special_attack = indiStat._special_attack;
            special_defense = indiStat._special_defense;
            speed = indiStat._speed;
            break;
        }
    }
}
