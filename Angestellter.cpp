//
// Created by morri on 09.06.2024.
//

#include "Angestellter.h"

#include <iostream>
using namespace std;

Angestellter::Angestellter(string name, int rvNr, double gehalt): Mitarbeiter(std::move(name), rvNr), gehalt(gehalt) {}

double Angestellter::getGehalt() {
    return gehalt;
}

void Angestellter::setGehalt(double gehalt) {
    this->gehalt = gehalt;
}

void Angestellter::mitarbeiterInfo() {
    Mitarbeiter::mitarbeiterInfo();
    cout << "Typ: Angestellter" << endl;
    cout << "Gehalt: " << gehalt << endl;
}

void Angestellter::tarifErhoehung(double prozent)  {
    gehalt += gehalt * prozent / 100;
}
