#ifndef FUTBOLESPANOL_H
#define FUTBOLESPANOL_H

#include <iostream>
#include <string>
#include "Deporte.h"
#include "CopasGanadas.h"
using namespace std;

class FutbolEspanol : public Deporte {
private:
    string liga;
    CopasGanadas copas;

public:
    FutbolEspanol() {
        pais = "España";
        liga = "LaLiga";
        copas.setEquipo("Real Madrid");
        copas.setCopas(14);
    }

    void setLiga(string l) { 
        liga = l; 
    }

    string getLiga() { 
        return liga; 
    }

    void jugadores() {
        cout << "Jugadores famosos: Benzema, Pedri, Griezmann." << endl;
    }

    void pelota() {
        cout << "Pelota esférica tamaño 5." << endl;
    }

    void equipos() {
        cout << "Equipos: Real Madrid, Barcelona, Atlético." << endl;
        copas.mostrarCopas();
    }
};

#endif
