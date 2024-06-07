# Loesung zu Uebung 5 (Mitarbeiter)

In diesem Projekt befindet sich die Lösung zu Uebung 5, da die Musterlösung unseres Dozenten all over the palce ist...

## Aufgabestellung
1. Schreibe eine Klasse Mitarbeiter, die die folgenden privaten Attribute vom Typ std::string besitzt: name (Für den Namen) und rvNr (Für die Rentenversicherungsnummer.
2. Implementiere einen allgemeinen Konstruktor, der diese Variablen zuweist.
3. Alle Attribute sollen durch Zugriffsfunktionen zurückgegeben werden können.
4. Programmiere eine Funktion mitarbeiterInfo, welche die Attribute auf dem Bildschirm ausgibt.
5. Der Mitarbeiter soll abstrakt sein. Das heißt also, dass man von ihm keine Instanz bilden kann. Er soll eine Funktion tarifErhoehung mit einem double Wert in Prozent enthalten, mit welchem man ihm eine Gehaltserhöhung geben kann.
Anmerkung: Diese Funktion ist nicht nur virtuell, sondern „pure virtual“, was bedeutet, dass die Methode mit einem „= 0“ deklariert wird.
6. Entwickle eine Klasse Angestellter, die von Mitarbeiter ableitet. Dieser hat ein privates double Attribut gehalt.
7. Die entsprechenden Zugriffsmethoden zu gehalt sollen ebenfalls implementiert werden.
8. Außerdem eine Methode mitarbeiterInfo, welche die Info Methode aus dem Mitarbeiter aufruft, und weiterhin den Status „Angestellter“ und das Gehalt ausgibt.
9. Die Methode tarifErhoehung soll sinnvoll überschrieben werden, sodass das Gehalt entsprechend prozentuell erhöht wird.
