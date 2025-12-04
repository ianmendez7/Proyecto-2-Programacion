/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción:
 * Esta clase representa el deporte del Fútbol Americano de la NFL.
 * Al igual que los otros deportes, hereda de la clase Deporte para
 * tener la misma estructura.
 *
 * También contiene un objeto de la clase CopasGanadas, el cual se usa
 * para mostrar cuántos campeonatos tiene un equipo importante de la NFL.
 * Esto es un ejemplo de composición.
 *
 * La clase puede mostrar jugadores famosos, cómo es el balón que se usa,
 * y los equipos más famosos, dependiendo de lo que pida el usuario
 * en el menú del programa.
 */

#ifndef NFL_H
#define NFL_H

#include <iostream>
#include <string>
#include "Deporte.h"        // Clase base de todos los deportes
#include "CopasGanadas.h"   // Clase que guarda cuántas copas tiene un equipo
using namespace std;

// Clase NFL
// Representa la liga de fútbol americano profesional en Estados Unidos.
// Hereda de Deporte y agrega información propia de este deporte como
// sus divisiones y copas ganadas.
class NFL : public Deporte {
private:
    string division;      // Aquí se guarda la división principal
    CopasGanadas copas;   // Objeto que contiene cuántas copas tiene un equipo

public:

    // Constructor por defecto:
    // Empieza con valores por defecto y también se inicializa
    // el objeto copas con un equipo representativo.

    NFL() : copas("Patriots", 6)
    {
        pais = "Estados Unidos";  // Deporte jugado principalmente aquí
        division = "AFC y NFC";   // Divisiones principales de la NFL
    }

    // Setter de division: permite cambiar el nombre de la división

    void set_division(string d)
    {
        division = d;
    }

    // Getter de division: regresa el nombre de la división

    string get_division()
    {
        return division;
    }

    // Método que imprime jugadores famosos de la NFL
    void jugadores()
    {
        cout << "Jugadores famosos: Tom Brady, Mahomes, Rodgers." << endl;
    }

    // Método que describe el tipo de balón característico de este deporte

    void pelota()
    {
        cout << "Pelota ovalada de cuero." << endl;
    }

    // Método que imprime equipos destacados
    // También muestra cuántas copas ha ganado el equipo ejemplo

    void equipos()
    {
        cout << "Equipos: Patriots, Cowboys,
