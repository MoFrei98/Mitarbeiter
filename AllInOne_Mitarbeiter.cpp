#include <iostream>
using namespace std;

// Abstract class because it has a pure virtual function
class Mitarbeiter {
private:
    string name;
    int rvNr;

public:
    Mitarbeiter(string name, int rvNr): name(name), rvNr(rvNr) {
        // this->name = name;
        // this->rvNr = rvNr;
    }

    virtual string getName() {
        return name;
    }

    virtual int getRvNr() {
        return rvNr;
    }

    virtual void setName(string name) {
        this->name = name;
    }

    virtual void setRvNr(int rvNr) {
        this->rvNr = rvNr;
    }

    virtual void mitarbeiterInfo() {
        cout << "Name: " << name << endl;
        cout << "Rentenversicherungsnummer: " << rvNr << endl;
    }

    virtual void tarifErhoehung(double prozent) = 0; // not implemented because its a pure virtual function (= 0)

    virtual ~Mitarbeiter() = default;
};