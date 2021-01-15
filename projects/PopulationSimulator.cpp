#include <ctime>
#include <cstdlib>
#define XY 1
#define XX 2
int chromosomeVar;
int humanNum;
int woman = XX;
int man = XY;

double currentYear = 0;
int currentPopulation = 0;
int currentMalePopulation = 0;
int currentFemalePopulation = 0;

void reproduce(int times){
    int x = 0;
    while (x < times){
        int repVar = (rand() % 2) + 1;
        currentPopulation++;
        if (repVar == 1){
            currentMalePopulation++;
        }
        else if (repVar == 2){
            currentFemalePopulation++;
        }
        x++;
    }
}

void expectedDeath(int times){
    int x = 0;
    while (x < times){
        int repVar = (rand() % 11) + 1;
        currentPopulation--;
        if (repVar <= 6){
            currentMalePopulation--;
        }
        else if (repVar > 6){
            currentFemalePopulation--;
        }
        x++;
    }
}

void yearsPassed(double years){
    currentYear += years;
    reproduce(years*131.4*1000000);//131.4 million people are born per year
    expectedDeath(years*55.3*1000000);//55.3 million people die per year
}