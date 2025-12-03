#ifndef NBA_H
#define NBA_H

#include <iostream>
#include <string>
#include "Deporte.h"
#include "CopasGanadas.h"
using namespace std;

class NBA : public Deporte {
private:
    string conferencia;
    CopasGanadas copas;

public:

    NBA() : copas("Lakers", 17)
    {
        pais = "Estados Unidos";
        conferencia = "Este y Oeste";
    }

    void set_conferencia(string c)
    {
        conferencia = c;
    }

    string get_conferencia()
    {
        return conferencia;
    }

    void jugadores()
    {
        cout << "Jugadores famosos: LeBron James, Curry, Durant." << endl;
    }

    void pelota()
    {
        cout << "Pelota tamaño 7 de cuero." << endl;
    }

    void equipos()
    {
        cout << "Equipos: Lakers, Warriors, Celtics." << endl;
        copas.mostrar_copas();
    }
};

#endif

