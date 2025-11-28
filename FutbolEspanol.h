#ifndef FUTBOLESPANOL_H
#define FUTBOLESPANOL_H
#include <iostream>
using namespace std;
class FutbolEspanol{
private:
    string liga;
    string pais;
public:
    void setLiga(string l){liga=l;}
    string getLiga(){return liga;}
    void setPais(string p){pais=p;}
    string getPais(){return pais;}
    void jugadores(){cout<<"En el futbol español juegan 11 jugadores por equipo."<<endl;}
    void pelota(){cout<<"La pelota es esferica, tamaño 5."<<endl;}
    void equipos(){cout<<"Equipos famosos: Real Madrid, Barcelona, Atletico."<<endl;}
};
#endif