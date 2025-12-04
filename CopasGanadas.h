/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción:
 * Esta clase representa las copas que ha ganado un equipo. 
 * La idea es que cada deporte tenga un objeto de 
 * este tipo para mostrar cuántos títulos
 * tiene su equipo más famoso.
 *
 * Se guardan dos cosas:
 *  - El nombre del equipo.
 *  - La cantidad de copas ganadas.
 */

#ifndef COPASGANADAS_H
#define COPASGANADAS_H

#include <iostream>
#include <string>
using namespace std;

// Clase CopasGanadas
// Esta clase sirve para guardar cuántas copas o títulos tiene un equipo.
// La usan los deportes como parte de su información.

class CopasGanadas {
private:
    string equipo;  // Nombre del equipo al que pertenecen las copas
    int copas;      // Cantidad total de copas ganadas por ese equipo

public:

    // Constructor por defecto:
    // Si no se recibe ningún equipo, se deja un nombre genérico
    // y un número de copas igual a 0.

    CopasGanadas()
    {
        equipo = "Sin equipo";
        copas = 0;
    }

    // Constructor con parámetros:
    // Aquí sí recibimos el nombre del equipo y cuántas copas tiene.

    CopasGanadas(string e, int c)
    {
        equipo = e;
        copas = c;
    }

    // Setter del nombre del equipo
    // Permite cambiar el nombre del equipo si se necesita.

    void set_equipo(string e)
    {
        equipo = e;
    }

    // Getter del nombre del equipo
    // Devuelve el nombre del equipo guardado.

    string get_equipo()
    {
        return equipo;
    }

    // Setter de la cantidad de copas
    // Permite actualizar el número de copas ganadas.

    void set_copas(int c)
    {
        copas = c;
    }

    // Getter de copas
    // Regresa cuántas copas tiene el equipo.

    int get_copas()
    {
        return copas;
    }

    // Método que imprime la información de las copas
    // Esto se usa cuando el usuario pide ver los equipos.

    void mostrar_copas()
    {
        cout << "Equipo: " << equipo << endl;
        cout << "Copas ganadas: " << copas << endl;
    }
};

#endif

