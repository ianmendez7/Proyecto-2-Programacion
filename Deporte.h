#ifndef DEPORTE_H
#define DEPORTE_H

#include <iostream>
#include <string>
using namespace std;

class Deporte {
protected:
    string pais;

public:

    void set_pais(string p)
    {
        pais = p;
    }

    string get_pais()
    {
        return pais;
    }

    void jugadores() {}
    void pelota() {}
    void equipos() {}
};

#endif
