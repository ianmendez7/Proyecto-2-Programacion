#ifndef NBA_H
#define NBA_H
#include <iostream>
using namespace std;
class NBA{
private:
    string conferencia;
    string pais;
public:
    void setConferencia(string c){conferencia=c;}
    string getConferencia(){return conferencia;}
    void setPais(string p){pais=p;}
    string getPais(){return pais;}
    void jugadores(){cout<<"En la NBA juegan 5 jugadores por equipo."<<endl;}
    void pelota(){cout<<"La pelota es tamaño 7."<<endl;}
    void equipos(){cout<<"Equipos famosos: Lakers, Warriors, Celtics."<<endl;}
};
#endif