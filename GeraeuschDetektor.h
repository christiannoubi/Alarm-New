#include <iostream>
#include "DetektorImpl.h"


class GeraeuschDetektor : public DetektorImpl{

public:

    GeraeuschDetektor(std::string name) : DetektorImpl (name){}
    ~GeraeuschDetektor () {}

    void ausloesen ()  override ;
    int liefereID() const;
};



