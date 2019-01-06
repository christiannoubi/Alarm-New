#include <iostream>
#include "DetektorImpl.h"

using namespace std;

class BewegungsDetektor : public DetektorImpl{

public:

    BewegungsDetektor(std::string name): DetektorImpl (name) {}
    ~BewegungsDetektor () {}

    void ausloesen () override ;

};



