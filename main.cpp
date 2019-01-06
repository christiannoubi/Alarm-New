#include <vector>
#include <iostream>
#include "Flutlicht.h"
#include "Sirene.h"
#include "BewegungsDetektor.h"
#include "GeraeuschDetektor.h"


    void alarmFuerAlleAnzeigen (std:: vector<Alarmierbar*>*vec)  {
        for ( auto p:*vec)
            p->alarmieren();
        }
   void alarmFuerAlleZuruecksetzen (std:: vector<Alarmierbar*>*vec) const {
       for(auto p : *vec)
           p->alarmZuruecksetzen();
   }

int main() {

     cout << "*** Alarmsystem aufbauen\n";

    vector<Alarmierbar*> vectorAlarmierbar;
    Detektor* detektor[2];

    detektor[0] = new BewegungsDetektor("BD1");

     Sirene sirene;
     vectorAlarmierbar.push_back(&sirene);
     detektor[0]->anschliessen(sirene);

     const int N_FLUTLICHT = 3;
     Flutlicht flutlicht[N_FLUTLICHT];

     for(int i=0; i<N_FLUTLICHT; i++) {
     vectorAlarmierbar.push_back(&flutlicht[i]);
     detektor[0]->anschliessen(flutlicht[i]);
     }

     detektor[1] = new GeraeuschDetektor("GD1");
     detektor[1]->anschliessen(sirene);
     detektor[1]->anschliessen(flutlicht[1]);

     cout << "*** Alarmsystem testen\n";

     detektor[0]->ausloesen();
     alarmFuerAlleAnzeigen(&vectorAlarmierbar);
     alarmFuerAlleZuruecksetzen(&vectorAlarmierbar);
     alarmFuerAlleAnzeigen(&vectorAlarmierbar);
     detektor[1]->ausloesen();
     alarmFuerAlleAnzeigen(&vectorAlarmierbar);

     cout << "*** Alarmsystem abbauen\n";

     delete detektor[0];
     delete detektor[1];
 }