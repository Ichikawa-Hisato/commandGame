#pragma once

#include <iostream>
#include <string>
using namespace std;

////********************************************************////
////    StreamText
////********************************************************////

class StreamText
{
public:
    int select_battle_action();
    void battle_stream(Status &state_1, Status &state_2);
private:
    void view_status(string name, Status status);
    Battle battle;
};
