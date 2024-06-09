//
// Created by morri on 09.06.2024.
//

#include "Mitarbeiter.h"

#include <iostream>
using namespace std;

Mitarbeiter::Mitarbeiter(string name, int rvNr): name(std::move(name)), rvNr(rvNr) {}

void Mitarbeiter::mitarbeiterInfo() {
    cout << "Name: " << name << endl;
    cout << "Rentenversicherungsnummer: " << rvNr << endl;
}

string Mitarbeiter::getName() {
    return name;
}

void Mitarbeiter::setName(string name) {
    this->name = std::move(name);
}

int Mitarbeiter::getRvNr() {
    return rvNr;
}

void Mitarbeiter::setRvNr(int rvNr) {
    this->rvNr = rvNr;
}