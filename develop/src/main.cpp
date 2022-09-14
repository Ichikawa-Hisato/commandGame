#include <iostream>
#include "status.h"
using namespace std;

int main()
{
    Status status;
    std::cout << "Hello world" << std::endl;
    std::cout << "Status Heat   : " << status.getHeatPoint() << std::endl;
    std::cout << "Status attack : " << status.getPhysicalAttack() << std::endl;
    std::cout << "Status defense : " << status.getPhysicalDefense() << std::endl;
}
