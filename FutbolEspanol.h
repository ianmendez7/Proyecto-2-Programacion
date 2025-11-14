#include <iostream>
using namespace std;

class FutbolEspanol {
public:
    void jugadores();
    void pelota();
    void equipos();
};

void FutbolEspanol::jugadores() {
    cout << "En la liga española juegan 11 jugadores por equipo." << endl;
}

void FutbolEspanol::pelota() {
    cout << "La pelota es esferica, tamaño 5, con peso de 410 a 450 gramos." << endl;
}

void FutbolEspanol::equipos() {
    cout << "Equipos destacados: Real Madrid, Barcelona, Atletico de Madrid, Sevilla." << endl;
}
