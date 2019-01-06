#include <iostream>
#include "AlarmierbarImpl.h"

class Sirene : public AlarmierbarImpl{
    static int objektZaehler;
    int id;

public:
    Sirene();

    //~Sirene();

    void alarmieren() override;

    std::string lieferename() const override;

    int liefereID() const override;
};