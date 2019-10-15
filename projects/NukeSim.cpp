#include "PopulationSimulator.cpp"
#define NAGASAKI 1
#define HIROSHIMA 2
#define PEARLHARBOR 3

int nagasakiPopulation = 100000;
int hiroshimaPopulation = 300000;
int pearlHarborPopulation = 10000;


void nuke(int location){
    if (location == 1){
        nagasakiPopulation = nagasakiPopulation - 0.8*nagasakiPopulation;
    }
    if (location == 2){
        hiroshimaPopulation = hiroshimaPopulation - 0.8*hiroshimaPopulation;
    }
}

bool pearlHarborBombed(){
    if (false){
        return true;
    }
    else{
        return false;
    }
}

void running(){
    if (pearlHarborBombed()){
        pearlHarborPopulation = pearlHarborPopulation - 0.3*pearlHarborPopulation;
        nuke(NAGASAKI);
        nuke(HIROSHIMA);
    }

    yearsPassed(100);
}
