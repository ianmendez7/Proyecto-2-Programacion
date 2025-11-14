#include <iostream>
using namespace std;

class NBA {
public:
    void jugadores();
    void pelota();
    void equipos();
};

void NBA::jugadores() {
    cout << "En la NBA juegan 5 jugadores por equipo en la duela." << endl;
}

void NBA::pelota() {
    cout << "La pelota es tamaño 7, de cuero o material compuesto." << endl;
}

void NBA::equipos() {
    cout << "Equipos destacados: Lakers, Warriors, Celtics, Bulls." << endl;
}
