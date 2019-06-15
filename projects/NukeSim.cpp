/*Joystick driverController = new Joystick(1);
Button driverButtonA = new JoystickButton(driverController, 1);
Button driverButtonB = new JoystickButton(driverController, 1);
Button driverButtonX = new JoystickButton(driverController, 3);
Button driverButtonY = new JoystickButton(driverController, 4);
Button driverButtonLeftBumper = new JoystickButton(driverController, 5);
Button driverButtonRightBumper = new JoystickButton(driverController, 6);
Button driverButtonSelect = new JoystickButton(driverController, 9);
Button driverButtonStart = new JoystickButton(driverController, 10);*/

#define NAGASAKI 1
#define HIROSHIMA 2
#define PEARLHARBOR 3

int nagasakiPopulation = 100000;
int hiroshimaPopulation = 300000;
int pearlHarborPopulation = 10000;


void nuke(int location){
    if (location = 1){
        nagasakiPopulation = nagasakiPopulation - 0.8*nagasakiPopulation;
    }
    if (location = 2){
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

/*if (driverButtonRightBumper.pressed()){
    pearlHarborBombed();
}*/

if (pearlHarborBombed){
    pearlHarborPopulation = pearlHarborPopulation - 0.3*pearlHarborPopulation;
    nuke(NAGASAKI);
    nuke(HIROSHIMA);
}

else{
}
