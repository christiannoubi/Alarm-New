#include <iostream>
#include "GeraeuschDetektor.h"


GeraeuschDetektor::GeraeuschDetektor(std::string str) : DetektorImpl(str){
    std::cout << "Detektor " << name << " aufbauen\n";
}

void GeraeuschDetektor::ausloesen(){
    std::cout << "GeraeuschDetektor " << name << " detektiert Geraeusch\n";
    for(auto p : empfaenger){
        std::cout << p->lieferename() << " Nr. " << p->liefereID() << " geht an\n";
        p->alarmZuruecksetzen();     //change the alarm
    }
}




