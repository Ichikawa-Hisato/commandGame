#include <iostream>
#include <string>
using namespace std;

#include "species.h"
#include "speciesStatusTable.h"

////********************************************************////
////    Species
////********************************************************////


void Species::readSpeciesStatus(std::string name)
{
    SpeciesStatusTable tbl;

    std::cout << "readSpeciesStatus::" << name << std::endl;

    for (auto specStat : tbl.specStatTbl) {
        if (name == specStat.name) {
            heat_point = specStat.heat_point;
            physical_attack = specStat.physical_attack;
            physical_defense = specStat.physical_defense;
            special_attack = specStat.special_attack;
            special_defense = specStat.special_defense;
            speed = specStat.speed;
            break;
        }
    }
}
