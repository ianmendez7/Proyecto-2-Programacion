/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción:
 * Esta clase representa el deporte del Basketball de la NBA.
 * Hereda de la clase Deporte y aquí se agregan los detalles que son propios
 * de la NBA.
 *
 * También contiene un objeto llamado CopasGanadas, que 
 * representa al equipo con más campeonatos en la liga. Esta composición
 * permite guardar en la clase NBA información relacionada
 * a títulos.
 *
 * La clase puede mostrar jugadores famosos, el tipo de balón usado,
 * y los equipos destacados según lo que pida el usuario en el menú.
 */

#ifndef NBA_H
#define NBA_H

#include <iostream>
#include <string>
#include "Deporte.h"        // Clase base para todos los deportes
#include "CopasGanadas.h"   // Clase que maneja copas ganadas por un equipo
using namespace std;

// Clase NBA
// Representa el basketball profesional de Estados Unidos.
// Hereda de Deporte y además guarda información extra como
// la conferencia y las copas ganadas por un equipo principal.
class NBA : public Deporte {
private:
    string conferencia;   // Guarda las conferencias principales (Este y Oeste)
    CopasGanadas copas;   // Objeto que almacena cuántas copas tiene un equipo

public:

    // Constructor por defecto:
    // Aquí empieza con valores por defecto para que el
    // programa ya tenga datos sin pedir nada al usuario.
    // También se inicializa el objeto copas usando su constructor.
    NBA() : copas("Lakers", 17)
    {
        pais = "Estados Unidos";    // País donde se juega este deporte
        conferencia = "Este y Oeste"; // División principal de equipos
    }

    // Setter de conferencia: permite cambiar la conferencia
    void set_conferencia(string c)
    {
        conferencia = c;
    }

    // Getter de conferencia: regresa la conferencia guardada
    string get_conferencia()
    {
        return conferencia;
    }

    // Método que imprime jugadores famosos de la NBA
    void jugadores()
    {
        cout << "Jugadores famosos: LeBron James, Curry, Durant." << endl;
    }

    // Método que describe el tipo de balón que se usa en este deporte
    void pelota()
    {
        cout << "Pelota tamano 7 de cuero." << endl;
    }

    // Método que muestra equipos conocidos
    // También imprime las copas ganadas del equipo más famoso
    void equipos()
    {
        cout << "Equipos: Lakers, Warriors, Celtics." << endl;
        copas.mostrar_copas();  // Llamamos al método del objeto copas
    }
};

#endif
