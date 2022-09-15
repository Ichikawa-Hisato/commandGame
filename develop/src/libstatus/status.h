#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "species.h"
#include "individual.h"

////********************************************************////
////    Status
////********************************************************////


class Status
{
public:
    int getHeatPoint();
    int getPhysicalAttack();
    int getPhysicalDefense();
    int getSpecialAttack();
    int getSpecialDefense();
    int getSpeed();
    void setSpecies(Species species);
    void setIndividual(Individual individual);
private:
    int level = 5;
    int base_point = 10;
    Species _species;
    Individual _individual;
};
