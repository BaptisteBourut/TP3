#pragma once
#include "Observable.h"
class Barometre :
    public Observable
{
private:
    int m_pression;

public:
    void Change(int);
    int Statut() { return this->m_pression; };
};

