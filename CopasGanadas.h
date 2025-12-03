#ifndef COPASGANADAS_H
#define COPASGANADAS_H

#include <iostream>
#include <string>
using namespace std;

class CopasGanadas {
private:
    string equipo;
    int copas;

public:

    CopasGanadas()
    {
        equipo = "Sin equipo";
        copas = 0;
    }

    CopasGanadas(string e, int c)
    {
        equipo = e;
        copas = c;
    }

    void set_equipo(string e)
    {
        equipo = e;
    }

    string get_equipo()
    {
        return equipo;
    }

    void set_copas(int c)
    {
        copas = c;
    }

    int get_copas()
    {
        return copas;
    }

    void mostrar_copas()
    {
        cout << "Equipo: " << equipo << endl;
        cout << "Copas ganadas: " << copas << endl;
    }
};

#endif


