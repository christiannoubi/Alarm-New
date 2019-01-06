#include <iostream>
#include "DetektorImpl.h"

DetektorImpl::DetektorImpl(std::string str){
    name = str;
}

DetektorImpl::~DetektorImpl(){
    std::cout << "Detektor " << name << " abbauen\n";
    this->alarmieren();             //in order to get the "abmelden"
}

void DetektorImpl::anschliessen (Alarmierbar& alarm) {
    empfaenger.push_back(&alarm);       //storage the Alarmierbar class
    std::cout << alarm.lieferename() << " Nr. " << alarm.liefereID() << " an " << name << " anschliessen\n";
}

void DetektorImpl::alarmieren () {        //implement "abmelden"
    for(auto p : empfaenger)
        std::cout << p->lieferename() << " Nr. " << p->liefereID() << " abmelden\n";
    }