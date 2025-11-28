#ifndef NFL_H
#define NFL_H
#include <iostream>
using namespace std;
class NFL{
private:
    string division;
    string pais;
public:
    void setDivision(string d){division=d;}
    string getDivision(){return division;}
    void setPais(string p){pais=p;}
    string getPais(){return pais;}
    void jugadores(){cout<<"En la NFL juegan 11 jugadores por equipo."<<endl;}
    void pelota(){cout<<"La pelota es ovalada."<<endl;}
    void equipos(){cout<<"Equipos famosos: Patriots, Packers, Cowboys."<<endl;}
};
#endif