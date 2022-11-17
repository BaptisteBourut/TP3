
#include <vector>
#include "Observator.h"
#include <iostream>

using namespace std;

class Observator;

class Observable
{
public:
    Observable(string name);
    virtual ~Observable();
    void addObs(Observator* obs);
    void delObs(Observator* obs);
    virtual int statut() const;
    string getName() const { return this->m_name; };

protected:
    void notify();

private:
    vector<Observator*> m_list;
    string m_name;
}; 
