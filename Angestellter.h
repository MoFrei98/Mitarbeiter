//
// Created by morri on 09.06.2024.
//
#progma once

#ifndef MITARBEITER_ANGESTELLTER_H
#define MITARBEITER_ANGESTELLTER_H

#include "Mitarbeiter.h"

#include <iostream>
using namespace std;

class Angestellter : public Mitarbeiter {

private:
    double gehalt;

public:
    Angestellter(string name, int rvNr, double gehalt);
    virtual ~Angestellter() = default;

    void setGehalt(double gehalt);

    double getGehalt();

    void mitarbeiterInfo() override;

    void tarifErhoehung(double prozent) override;

};


#endif //MITARBEITER_ANGESTELLTER_H
