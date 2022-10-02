#include <iostream>
#include <thread>
#include <memory>
#include <unistd.h>
#include "status.h"
#include "battle.h"
#include "streamText.h"
using namespace std;

int main()
{
    Status hero_status;
    hero_status.setName("hero");

    Status devil_status;
    devil_status.setName("devil");

    StreamText streamText;
    int action;
    action = streamText.select_battle_action();

    if (action == 1) {
        streamText.battle_stream(hero_status, devil_status);
    }
}
