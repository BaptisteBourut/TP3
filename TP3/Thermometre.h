#pragma once
#include "Observable.h"
class Thermometre :
    public Observable
{
private:
    int m_temperature;
public:
    void Change(int);
    int Statut() { return this->m_temperature; }
};

