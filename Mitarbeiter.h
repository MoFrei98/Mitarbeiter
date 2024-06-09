//
// Created by morri on 09.06.2024.
//
#pragma once

#ifndef MITARBEITER_MITARBEITER_H
#define MITARBEITER_MITARBEITER_H

#include <iostream>
using namespace std;


class Mitarbeiter {
private:
    string name;
    int rvNr;

public:
    Mitarbeiter(string name, int rvNr);
    
    virtual ~Mitarbeiter() = default;
    
    virtual string getName();
    virtual int getRvNr();
    
    virtual void setName(string name);
    virtual void setRvNr(int rvNr);
    
    virtual void mitarbeiterInfo();
    virtual void tarifErhoehung(double prozent) = 0;
};


#endif //MITARBEITER_MITARBEITER_H
