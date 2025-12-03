#ifndef NFL_H
#define NFL_H

#include <iostream>
#include <string>
#include "Deporte.h"
#include "CopasGanadas.h"
using namespace std;

class NFL : public Deporte {
private:
    string division;
    CopasGanadas copas;

public:
    NFL() {
        pais = "Estados Unidos";
        division = "AFC y NFC";
        copas.setEquipo("Patriots");
        copas.setCopas(6);
    }

    void setDivision(string d) { 
        division = d; 
    }

    string getDivision() { 
        return division; 
    }

    void jugadores() {
        cout << "Jugadores famosos: Tom Brady, Mahomes, Rodgers." << endl;
    }

    void pelota() {
        cout << "Pelota ovalada de cuero." << endl;
    }

    void equipos() {
        cout << "Equipos: Patriots, Cowboys, Packers." << endl;
        copas.mostrarCopas();
    }
};

#endif
