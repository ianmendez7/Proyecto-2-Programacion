/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción:
 * Este archivo define la clase Deporte. Esta clase es la base que hereda 
 * para los deportes que usamos en el
 * programa (Fútbol Español, NBA y NFL). Aquí simplemente
 * guardamos el país donde se practica el deporte y también
 * tenemos métodos vacíos que luego las clases hijas van a
 * usar con información real.  
 */

#ifndef DEPORTE_H
#define DEPORTE_H

#include <iostream>
#include <string>
using namespace std;

// Clase Deporte
// Esta clase será la "base" de los demás deportes.
// Aquí solo guardamos el país y declaramos los métodos
// que las clases hijas van a personalizar.

class Deporte {
protected:
    string pais;   // Aquí guardamos el país donde se juega este deporte

public:

    // Este método permite guardar el país
    // que le pasemos desde afuera.

    void set_pais(string p)
    {
        pais = p;
    }

    // Este método nos regresa el país que se guardó.

    string get_pais()
    {
        return pais;
    }

    // Estos métodos están vacíos porque serán sobreescritos
    // por las clases hijas. Aquí solo existen para que las
    // clases derivadas tengan la misma estructura.

    void jugadores() {}
    void pelota() {}
    void equipos() {}
};

#endif
