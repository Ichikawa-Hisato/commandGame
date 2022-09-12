#include <iostream>
#include <string>
using namespace std;

#include "status.h"

////********************************************************////
////    Status
////********************************************************////

int Status::getHeatPoint()
{
    return heat_point;
}

int Status::getPhysicalAttack()
{
    return physical_attack;
}

int Status::getPhysicalDefense()
{
    return physical_defense;
}

int Status::getSpecialAttack()
{
    return special_attack;
}

int Status::getSpecialDefense()
{
    return special_defense;
}

int Status::getSpeed()
{
    return speed;
}
