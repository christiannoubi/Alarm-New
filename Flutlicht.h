#include <iostream>
#include "AlarmierbarImpl.h"
#include <vector>

class Flutlicht : public  AlarmierbarImpl{

private:

    static int objektZaehler;
    int id;

public:

    Flutlicht() {}
    ~Flutlicht () {}


     void alarmieren () override {}
     std::string lieferename () const override ;
     int liefereID() const override ;
};

