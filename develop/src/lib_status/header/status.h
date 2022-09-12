#include <iostream>
#include <string>
using namespace std;


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
private:
    int heat_point = 10;
    int physical_attack = 10;
    int physical_defense = 10;
    int special_attack = 10;
    int special_defense = 10;
    int speed = 10;
};
