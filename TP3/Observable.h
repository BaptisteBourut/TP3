
#include <vector>
#include <iostream>
using namespace std;

class Observateur;

class Observable
{


private:
    vector<Observateur*> m_list;
    string m_name;

public:
    Observable(string name);
    virtual ~Observable();
    void AddObs(Observateur* obs);
    void DelObs(Observateur* obs);
    virtual int Statut() const;
    string GetName() const { return this->m_name; };

protected:
    void Notify();

}; 
