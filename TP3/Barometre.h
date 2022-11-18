#pragma once
#include "Observable.h"
class Barometre :public Observable
{
private:
    int m_pression;

public:
    void Change(int val) { m_pression = val; Notify(); };
    int Statut() const { return this->m_pression; };
    const char* GetName() const { return "Barometre"; }
};

