#include <iostream>
#include "Mitarbeiter.cpp"
using namespace std;

class Angestellter: public Mitarbeiter {
private:
    double gehalt;

public:
    // Call the constructor of baseclass Mitarbeiter (Mitarbeiter(name, rvNr))
    Angestellter(string name, int rvNr, double gehalt): Mitarbeiter(name, rvNr), gehalt(gehalt) {
        // this->gehalt = gehalt;
    }

    double getGehalt() {
        return gehalt;
    }

    void setGehalt(double gehalt) {
        this->gehalt = gehalt;
    }

    void mitarbeiterInfo() override {
        Mitarbeiter::mitarbeiterInfo(); // call of the base class method
        cout << "Status: Angestellter" << endl;
        cout << "Gehalt: " << gehalt << endl;
        cout << endl;
    }

    void tarifErhoehung(double prozent) {
        gehalt += gehalt * prozent / 100;
    }
};
