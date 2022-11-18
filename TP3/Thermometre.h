#pragma once
#include "Observable.h"
class Thermometre :
    public Observable
{
private:
    int m_temperature;
public:
    void Change(int val) { m_temperature = val; Notify(); };
    int Statut() const  { return this->m_temperature; };
    const char* GetName() const { return "Thermometre"; }
};

