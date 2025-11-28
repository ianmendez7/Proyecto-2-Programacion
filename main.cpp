#include <iostream>
#include <string>
#include "FutbolEspanol.h"
#include "NBA.h"
#include "NFL.h"
#include "CopasGanadas.h"
using namespace std;
int main(){
    string deporte, opcion;
    cout<<"¿Qué deporte deseas consultar? (futbol, nba, nfl): ";
    cin>>deporte;
    cout<<"¿Qué deseas saber? (jugadores, pelota, equipos): ";
    cin>>opcion;

    if(deporte=="futbol"){
        FutbolEspanol f;
        if(opcion=="jugadores")f.jugadores();
        else if(opcion=="pelota")f.pelota();
        else if(opcion=="equipos")f.equipos();
    }else if(deporte=="nba"){
        NBA n;
        if(opcion=="jugadores")n.jugadores();
        else if(opcion=="pelota")n.pelota();
        else if(opcion=="equipos")n.equipos();
    }else if(deporte=="nfl"){
        NFL nfl;
        if(opcion=="jugadores")nfl.jugadores();
        else if(opcion=="pelota")nfl.pelota();
        else if(opcion=="equipos")nfl.equipos();
    }else{
        cout<<"Deporte no válido."<<endl;
    }
    return 0;
}