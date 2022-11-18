// TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Observable.h"
#include "Observateur.h"
#include "Barometre.h"
#include "Thermometre.h"
#include "MeteoFrance.h"
using namespace std;


using namespace std;
int main()
{
    cout << "Hello World!\n";
    Thermometre unThermometre;
    Barometre unBarometre;
    {
        MeteoFrance Station;
        cout << "The meteo station is subscribed to the thermometre and the barometre" << endl;
        unThermometre.AddObs(&Station);
        unBarometre.AddObs(&Station);
        unThermometre.Change(31);
        unBarometre.Change(975);
    }
    unThermometre.Change(45);
    return 0;






}

