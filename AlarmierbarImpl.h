#include <iostream>
#include "Alarmierbar.h"

class AlarmierbarImpl: public Alarmierbar{

     bool  alarm;

public:

    AlarmierbarImpl(){
        alarm = false;
    }

    virtual void alarmieren() {}

    bool istAlarmiert()const {
        return alarm;
    }

    void alarmZuruecksetzen() override {       //change the alarm
        if(alarm == false)
            alarm = true;
        else
            alarm = false;
    }
};