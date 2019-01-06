#include <iostream>
#include "Sirene.h"
#include "AlarmierbarImpl.h"

int Sirene::objektZaehler = 0;

Sirene::Sirene(){
    objektZaehler++;
    id = objektZaehler;
}

void Sirene::alarmieren(){
    if(this->istAlarmiert() == true){          //judge the alarm is true or not. true means already "geht an" then enter "ist an"
        std::cout << this->lieferename() << " Nr. " << id << ": Alarm ist an\n";
    }
    else{
        std::cout << this->lieferename() << " Nr. " << id << ": Alarm ist aus\n";  //if alarm is false, means already "is an" then enter "ist aus"
    }
}

std::string Sirene::lieferename () const {       //provide the name of Sirene
    std::string name = "Sirene";
    return name;
}

int Sirene::liefereID() const {                //additional function, in order to provide the ID.
    return id;

}