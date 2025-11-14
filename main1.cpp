#include <iostream>
#include <string>
using namespace std;

#include "FutbolEspanol.h"
#include "NBA.h"
#include "NFL.h"

int main() {
    string deporte;
    string opcion;

    cout << "Que deporte deseas consultar? (futbol, nba, nfl): ";
    cin >> deporte;

    cout << "Que deseas saber? (jugadores, pelota, equipos): ";
    cin >> opcion;

    if (deporte == "futbol") {
        FutbolEspanol fe;
        if (opcion == "jugadores") fe.jugadores();
        else if (opcion == "pelota") fe.pelota();
        else if (opcion == "equipos") fe.equipos();
        else cout << "Opcion invalida.\n";
    }
    else if (deporte == "nba") {
        NBA nba;
        if (opcion == "jugadores") nba.jugadores();
        else if (opcion == "pelota") nba.pelota();
        else if (opcion == "equipos") nba.equipos();
        else cout << "Opcion invalida.\n";
    }
    else if (deporte == "nfl") {
        NFL nfl;
        if (opcion == "jugadores") nfl.jugadores();
        else if (opcion == "pelota") nfl.pelota();
        else if (opcion == "equipos") nfl.equipos();
        else cout << "Opcion invalida.\n";
    }
    else {
        cout << "Deporte invalido.\n";
    }

    return 0;
}
