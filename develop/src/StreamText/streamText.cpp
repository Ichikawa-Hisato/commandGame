#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

#include "status.h"
#include "battle.h"
#include "streamText.h"

////********************************************************////
////    StreamText
////********************************************************////

int StreamText::select_battle_action()
{
    int ret;
    string input;

    cout << "Input action:" << endl;
    cout << "input 1 : attack       input 2 : items" << endl;
    cout << "input 3 : change       input 4 : run away" << endl;

    cin >> input;

    cout << "Input action:" << input << endl;

    ret = std::atoi(input.c_str());

    return ret;
}

void StreamText::battle_stream(Status &state_1, Status &state_2)
{
    StreamText streamText;
    streamText.view_status(state_1.getName(), state_1);

    std::cout << std::endl;

    streamText.view_status(state_2.getName(), state_2);
    sleep(1);

    std::cout << std::endl;
    battle.battle_phase(state_1, state_2);

    std::cout << std::endl;
    streamText.view_status(state_1.getName(), state_1);
    std::cout << std::endl;
    streamText.view_status(state_2.getName(), state_2);
}

void StreamText::view_status(string name, Status status)
{
    std::cout << name << " Status Level   : " << status.getLevel() << std::endl;
    std::cout << name << " Status Heat    : " << status.getHeatPoint() << std::endl;
    std::cout << name << " Status attack  : " << status.getPhysicalAttack() << std::endl;
    std::cout << name << " Status defense : " << status.getPhysicalDefense() << std::endl;
}
