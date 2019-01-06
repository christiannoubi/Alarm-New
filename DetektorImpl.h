#include <iostream>
#include <vector>
#include "Detektor.h"

class DetektorImpl : public Detektor{

protected:
    std::string name;
    std::vector<Alarmierbar*> empfaenger;
     void alarmieren () {};

public:

    DetektorImpl(std::string name) {
        this->name = name;
    }
    virtual  ~DetektorImpl () {}

     void anschliessen (Alarmierbar& alarmierbar) override {};

};

