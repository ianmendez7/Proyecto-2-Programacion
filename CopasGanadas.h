#ifndef COPASGANADAS_H
#define COPASGANADAS_H
#include <iostream>
using namespace std;
class CopasGanadas {
private:
    string equipo;
    int copas;
public:
    void setEquipo(string e){equipo=e;}
    string getEquipo(){return equipo;}
    void setCopas(int c){copas=c;}
    int getCopas(){return copas;}
    void mostrarCopas(){ cout<<"El equipo "<<equipo<<" ha ganado "<<copas<<" copas."<<endl; }
};
#endif