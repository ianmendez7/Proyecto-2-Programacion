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

    FutbolEspanol() : copas("Real Madrid", 14)
    {
        pais = "España";
        liga = "LaLiga";
    }

    void set_liga(string l)
    {
        liga = l;
    }

    string get_liga()
    {
        return liga;
    }

    void jugadores()
    {
        cout << "Jugadores famosos: Benzema, Pedri, Griezmann." << endl;
    }

    void pelota()
    {
        cout << "Pelota esferica tamano 5." << endl;
    }

    void equipos()
    {
        cout << "Equipos: Real Madrid, Barcelona, Atletico." << endl;
        copas.mostrar_copas();
    }
};

#endif
