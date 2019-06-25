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
        if (repVar == 2){
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
        if (repVar > 6){
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




































/*
#define if if
#define then {
#define period };
#define are /*are*/
/*#define chick 2
#define XY 1
#define XX 2
#define gayXY 3
#define gayXX 4
#define margot 4
#define gay 2+
#define reproduce human(chromosomeVar);*/


/*if gay then fuck margot period
if gay {fuck margot};*/

/*
void human(int chromosome){
    if ((chromosome) == 2){
        humanNum = 2;
    }
    if ((chromosome) == 1){
        humanNum = 1;
    }
}

void atom (int element){

}*/