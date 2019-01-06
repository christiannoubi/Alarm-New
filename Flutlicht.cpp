#include <iostream>
#include "Flutlicht.h"

int Flutlicht::objektZaehler = 0;

Flutlicht::Flutlicht(){
    objektZaehler++;
    id = objektZaehler;
}

void Flutlicht::alarmieren(){
    if(istAlarmiert() == true){
        std::cout << this->lieferename() << " Nr. " << id << ": Alarm ist an\n";   //the same as Sirene
    }
    else{
        std::cout << this->lieferename() << " Nr. " << id << ": Alarm ist aus\n";
    }
}

std::string Flutlicht::lieferename() const {
    std::string name = "Flutlicht";
    return name;
}

int Flutlicht::liefereID()const {
    return id;
}