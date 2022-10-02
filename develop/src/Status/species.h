#pragma once

#include <iostream>
#include <string>
using namespace std;


////********************************************************////
////    Species
////********************************************************////


class Species
{
public:
    void readSpeciesStatus(std::string name);
public:
    // range 1~100
    int heat_point = 40;
    int physical_attack = 40;
    int physical_defense = 40;
    int special_attack = 40;
    int special_defense = 40;
    int speed = 40;
};
