#include <iostream>
#include "status.h"
#include "species.h"
#include "individual.h"
using namespace std;

int main()
{
    Status hero_status;
    Species hero_species;
    Individual hero_individual;

    Status devil_status;
    Species devil_species;

    hero_species.readSpeciesStatus("hero");
    hero_status.setSpecies(hero_species);

    hero_individual.readIndividualStatus("hero");
    hero_status.setIndividual(hero_individual);

    std::cout << "Hero Status Heat   : " << hero_status.getHeatPoint() << std::endl;
    std::cout << "Hero Status attack : " << hero_status.getPhysicalAttack() << std::endl;
    std::cout << "Hero Status defense : " << hero_status.getPhysicalDefense() << std::endl;

    std::cout << std::endl;

    devil_species.readSpeciesStatus("devil");
    devil_status.setSpecies(devil_species);

    std::cout << "Devil Status Heat   : " << devil_status.getHeatPoint() << std::endl;
    std::cout << "Devil Status attack : " << devil_status.getPhysicalAttack() << std::endl;
    std::cout << "Devil Status defense : " << devil_status.getPhysicalDefense() << std::endl;
}
