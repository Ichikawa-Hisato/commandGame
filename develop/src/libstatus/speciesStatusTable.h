#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;


////********************************************************////
////    SpeciesStatusTable
////********************************************************////


class SpeciesStatusTable
{
// name heat_point, physical_attack, physical_defense, special_attack, special_defense, speed
// // range 1~100 * 6
public:
    typedef struct
    {
        std::string name;
        int heat_point;
        int physical_attack;
        int physical_defense;
        int special_attack;
        int special_defense;
        int speed;
    }speciesStatTbl;

    std::vector<speciesStatTbl> specStatTbl = {
        {"hero", 50, 30, 20, 25, 30, 20},
        {"devil", 60, 20, 50, 15, 60, 60},
    };
};
