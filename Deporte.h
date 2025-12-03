#ifndef DEPORTE_H
#define DEPORTE_H

#include <iostream>
#include <string>
using namespace std;

class Deporte {
protected:
    string pais;

public:
    void setPais(string p) { 
        pais = p; 
    }

    string getPais() { 
        return pais; 
    }

    void jugadores() {}
    void pelota() {}
    void equipos() {}
};

#endif

