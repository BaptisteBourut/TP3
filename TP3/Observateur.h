
#include "Observable.h"
#include <vector>
#include <iostream>

using namespace std;

class Observable;

class Observateur
{

private:
    vector<Observable*> m_list;
public:
    Observateur();
    virtual ~Observateur();
    void Update(const Observable* observable) const;
    void AddObs(Observable* obs);
    void DelObs(Observable* obs);


};