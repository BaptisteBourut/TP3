
#include "Observable.h"
#include <list>
#include <iostream>

using namespace std;

class Observable;

class Observateur
{

private:
    vector<Observable*> m_list;
    typedef vector<Observable*>::iterator iterator;
    typedef vector<Observable*>::const_iterator iterator;
    virtual ~Observateur()=0;


public:
    Observateur();
    virtual void Update(const Observable* observable) const;
    void AddObs(Observable* obs);
    void DelObs(Observable* obs);


};