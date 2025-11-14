#include <iostream>
using namespace std;

class NFL {
public:
    void jugadores();
    void pelota();
    void equipos();
};

void NFL::jugadores() {
    cout << "En la NFL juegan 11 jugadores por equipo en el campo." << endl;
}

void NFL::pelota() {
    cout << "La pelota es ovalada, de cuero, aproximadamente 28 cm de largo." << endl;
}

void NFL::equipos() {
    cout << "Equipos destacados: Patriots, Cowboys, Packers, Steelers." << endl;
}
