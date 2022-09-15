#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;


////********************************************************////
////    Individual
////********************************************************////


class Individual
{
public:
    void readIndividualStatus(std::string name);
public:
    std::string name;
    int heat_point = 5;
    int physical_attack = 5;
    int physical_defense = 5;
    int special_attack = 5;
    int special_defense = 5;
    int speed = 4;

    // moc read file
    typedef struct
    {
        // range 1~10
        std::string name;
        int _heat_point = 5;
        int _physical_attack = 5;
        int _physical_defense = 5;
        int _special_attack = 5;
        int _special_defense = 5;
        int _speed = 4;
    }IndividualStatTbl;

    std::vector<IndividualStatTbl> indiStatTbl;
};
