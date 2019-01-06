#include <iostream>
#include "BewegungsDetektor.h"

BewegungsDetektor::BewegungsDetektor(std::string str) : DetektorImpl(str){
    std::cout << "Detektor " << name << " aufbauen\n";
}

void BewegungsDetektor::ausloesen(){
    std::cout << "BewegungsDetektor " << name << " detektiert Bewegung\n";
    for(auto p : empfaenger){
        std::cout << p->lieferename() << " Nr. " << p->liefereID() << " geht an\n";
        p->alarmZuruecksetzen();
    }
}