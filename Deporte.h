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

    virtual void jugadores() {}
    virtual void pelota() {}
    virtual void equipos() {}
};

#endif
