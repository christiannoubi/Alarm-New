#include <iostream>
#include "Alarmierbar.h"

class Detektor {

public:

    virtual ~Detektor () {}

    virtual void ausloesen ()  = 0;

    virtual void anschliessen (Alarmierbar& alarmierbar)  = 0;

};

