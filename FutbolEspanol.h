/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción:
 * Esta clase es sobre el deporte del Fútbol Español. Hereda de la clase
 * Deporte y aquí se completan los detalles de este deporte.
 *
 * También contiene un objeto de tipo CopasGanadas, que representa
 * las copas que ha ganado un equipo muy importante de esta liga,
 * utilizando así composición.
 *
 * La clase ofrece información sobre jugadores famosos, cómo es el balón
 * y qué equipos destacan. Todo esto se muestra dependiendo de lo que pida
 * el usuario en el menú.
 */

#ifndef FUTBOLESPANOL_H
#define FUTBOLESPANOL_H

#include <iostream>
#include <string>
#include "Deporte.h"         // Incluye la clase base de todos los deportes
#include "CopasGanadas.h"   // Incluye la clase que guarda datos de copas
using namespace std;

// Clase FutbolEspanol
// Hereda de Deporte y representa la liga española de fútbol.
// Aquí guardamos detalles específicos como el nombre de la liga y
// las copas del equipo más representativo.

class FutbolEspanol : public Deporte {
private:
    string liga;        // Aquí se guarda el nombre de la liga 
    CopasGanadas copas; // Objeto que guarda cuántas copas ha ganado un equipo

public:

    // Constructor por defecto:
    // Aquí empieza la clase con valores por defecto para que el
    // programa ya tenga información sin necesidad de pedirla al usuario.
    // También se inicia el objeto de CopasGanadas usando su constructor.

    FutbolEspanol() : copas("Real Madrid", 14)
    {
        pais = "España";   // Heredado de Deporte, asignamos el país
        liga = "LaLiga";   // Nombre de la liga española
    }

    // Setter de liga: permite cambiar el nombre de la liga

    void set_liga(string l)
    {
        liga = l;
    }

    // Getter de liga: nos regresa el nombre de la liga guardada

    string get_liga()
    {
        return liga;
    }

    // Método que imprime jugadores famosos de esta liga

    void jugadores()
    {
        cout << "Jugadores famosos: Benzema, Pedri, Griezmann." << endl;
    }

    // Método que describe el tipo de pelota usada en este deporte

    void pelota()
    {
        cout << "Pelota esferica tamano 5." << endl;
    }

    // Método que imprime equipos famosos
    // Además muestra cuántas copas ha ganado el Real Madrid

    void equipos()
    {
        cout << "Equipos: Real Madrid, Barcelona, Atletico." << endl;
        copas.mostrar_copas(); // Mandamos llamar el objeto de copas
    }
};

#endif
