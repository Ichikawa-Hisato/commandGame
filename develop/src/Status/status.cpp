#include <iostream>
#include <string>
using namespace std;

#include "status.h"

////********************************************************////
////    Status
////********************************************************////


// heat_point Calc
// (species*2+_individual*6)*level/100 + level + base_point
int Status::getHeatPoint()
{
    return now_hp;
}

// physical_attack ~ speed Calc
// (species*2+_individual*6)*level/100 + base_point
int Status::getPhysicalAttack()
{
    return ((_species.physical_attack*2 + _individual.physical_attack*6)*level/100 + base_point);
}

int Status::getPhysicalDefense()
{
    return ((_species.physical_defense*2 + _individual.physical_defense*6)*level/100 + base_point);
}

int Status::getSpecialAttack()
{
    return ((_species.special_attack*2 + _individual.special_attack*6)*level/100 + base_point);
}

int Status::getSpecialDefense()
{
    return ((_species.special_defense*2 + _individual.special_defense*6)*level/100 + base_point);
}

int Status::getSpeed()
{
    return ((_species.speed*2 + _individual.speed*6)*level/100 + base_point);
}

string Status::getName()
{
    return _name;
}

int Status::getLevel()
{
    return level;
}

void Status::setName(string name)
{
    _name = name;
    
    // read status
    _species.readSpeciesStatus(_name);
    _individual.readIndividualStatus(_name);

    // set hp
    max_hp = (_species.heat_point*2 + _individual.heat_point*6)*level/100 + level + base_point;
    now_hp = max_hp;
}

void Status::setHeatPoint(int hp)
{
    now_hp = hp;
}

// set other status
/* 
void Status::setSpecies(Species species)
{
    _species = species;
}

void Status::setIndividual(Individual individual)
{
    _individual = individual;
}
*/
