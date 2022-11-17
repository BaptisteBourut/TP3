
#include <vector>
#include <iostream>
using namespace std;

class Observateur;

class Observable
{


private:
    vector<Observateur*> m_list;
    string m_name;
    typedef vector<Observateur*>::iterator iterator;
    typedef vector<Observateur*>::const_iterator iterator;

public:
    virtual ~Observable();
    void AddObs(Observateur* obs);
    void DelObs(Observateur* obs);
    virtual int Statut() const =0;
    virtual const char* GetName() const =0;

protected:
    void Notify();

}; 
