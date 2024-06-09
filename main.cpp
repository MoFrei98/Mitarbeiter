//#include "AllInOne_Angestellter.cpp"
#include "Angestellter.h"

#include <iostream>
using namespace std;

int main() {
    // declare the objects
    Angestellter a1("Max Mustermann", 123456, 3000);    // direct constructor call
    Angestellter a2 = Angestellter("Maria Musterfrau", 654321, 4000);   // nice constructor call :D

    // test a1
    cout << "a1 before changes: " << endl;
    a1.mitarbeiterInfo();
    a1.setName("Max Mustermann Jr.");
    a1.tarifErhoehung(10.0);
    cout << "a1 after changes: " << endl;
    a1.mitarbeiterInfo();

    cout << "--------------------------------" << endl << endl;

    // test a2
    cout << "a2 before changes: " << endl;
    a2.mitarbeiterInfo();
    a2.setGehalt(4500);
    a2.setRvNr(34759);
    cout << "a2 after changes: " << endl;
    a2.mitarbeiterInfo();

    return 0;
}
