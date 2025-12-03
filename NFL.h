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

    NFL() : copas("Patriots", 6)
    {
        pais = "Estados Unidos";
        division = "AFC y NFC";
    }

    void set_division(string d)
    {
        division = d;
    }

    string get_division()
    {
        return division;
    }

    void jugadores()
    {
        cout << "Jugadores famosos: Tom Brady, Mahomes, Rodgers." << endl;
    }

    void pelota()
    {
        cout << "Pelota ovalada de cuero." << endl;
    }

    void equipos()
    {
        cout << "Equipos: Patriots, Cowboys, Packers." << endl;
        copas.mostrar_copas();
    }
};

#endif


