#include <iostream>

class Alarmierbar {

public:

    virtual ~Alarmierbar () {}
    virtual void alarmieren () = 0;
    virtual std::string lieferename () const = 0;
    virtual bool istAlarmiert () const = 0;
    virtual void alarmZuruecksetzen () = 0;
    virtual int liefereID () const = 0;
};