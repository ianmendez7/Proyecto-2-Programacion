#include <iostream>
#include <string>
#include "FutbolEspanol.h"
#include "NBA.h"
#include "NFL.h"
using namespace std;

int main() {
    string deporte;
    string opcion;

    cout << "Que deporte deseas consultar (futbol, nba, nfl): ";
    cin >> deporte;

    while (deporte != "futbol" && deporte != "nba" && deporte != "nfl") {
        cout << "Error: deporte no valido. Intenta de nuevo: ";
        cin >> deporte;
    }

    cout << "Que deseas saber (jugadores, pelota, equipos): ";
    cin >> opcion;

    while (opcion != "jugadores" && opcion != "pelota" && opcion != "equipos") {
        cout << "Error: opcion no valida. Intenta de nuevo: ";
        cin >> opcion;
    }

    if (deporte == "futbol") {
        FutbolEspanol f;

        if (opcion == "jugadores") f.jugadores();
        else if (opcion == "pelota") f.pelota();
        else f.equipos();
    }

    if (deporte == "nba") {
        NBA n;

        if (opcion == "jugadores") n.jugadores();
        else if (opcion == "pelota") n.pelota();
        else n.equipos();
    }

    if (deporte == "nfl") {
        NFL nf;

        if (opcion == "jugadores") nf.jugadores();
        else if (opcion == "pelota") nf.pelota();
        else nf.equipos();
    }

    return 0;
}

