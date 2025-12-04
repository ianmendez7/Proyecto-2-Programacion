/*
 * Proyecto Deportes
 * Autor: Ian Santiago Méndez Granados
 * Profesor: Benjamín Valdés Aguirre
 * Fecha: 5 de diciembre de 2025
 *
 * Descripción general:
 * Este archivo contiene la función main.
 * Aquí le preguntamos al usuario qué deporte quiere consultar
 * y qué información desea saber de ese deporte.
 *
 * Dependiendo de lo que el usuario escriba, el programa muestra
 * información sobre:
 *   - Jugadores famosos
 *   - La pelota usada en ese deporte
 *   - Equipos importantes junto con las copas ganadas
 *
 * También se incluye validación, para que el usuario no pueda escribir
 * opciones que no existen. 
 */

#include <iostream>
#include <string>
#include "FutbolEspanol.h"  // Incluimos la clase del fútbol español
#include "NBA.h"            // Incluimos la clase de la NBA
#include "NFL.h"            // Incluimos la clase de la NFL
using namespace std;

int main()
{
    // Estas variables guardan la elección del usuario:
    // "deporte" será si elige futbol, nba o nfl.
    // "opcion" será si quiere jugadores, pelota o equipos.
    
    string deporte;
    string opcion;

    // Aquí le pregunta al usuario qué deporte quiere consultar.
    // Esto determina qué clase se va a usar más adelante.
    
    cout << "Que deporte deseas consultar (futbol, nba, nfl): ";
    cin >> deporte;

    // Este while sirve para validar la entrada del usuario.
    // Si escribe algo que no coincide con los términos, se pide
    // volver a ingresar la respuesta hasta que estos coincidan
    
    while (deporte != "futbol" && deporte != "nba" && deporte != "nfl")
    {
        cout << "Error: deporte no valido. Intenta de nuevo: ";
        cin >> deporte;
    }

    // Ahora preguntamos qué tipo de informacion quiere consultar.
    
    cout << "Que deseas saber (jugadores, pelota, equipos): ";
    cin >> opcion;

    // Validación de la segunda opción. Aquí evitamos que el usuario escriba
    // opciones que el programa no puede procesar.
    
    while (opcion != "jugadores" && opcion != "pelota" && opcion != "equipos")
    {
        cout << "Error: opcion no valida. Intenta de nuevo: ";
        cin >> opcion;
    }

    
    // A partir de aquí se revisa qué deporte eligió el usuario, y según eso
    // se crea el objeto de la clase correspondiente.
    // Después se verifica qué información pidió y se usa el método correcto.


    // Si el usuario eligió FUTBOL ESPAÑOL
    if (deporte == "futbol")
    {
        FutbolEspanol f;  // se crea el objeto del deporte

        // Revisa qué tipo de información quiere ver
        if (opcion == "jugadores") f.jugadores();
        else if (opcion == "pelota") f.pelota();
        else f.equipos();  // También imprime cuántas copas tiene el ese equipo
    }

    // Si el usuario eligió NBA
    if (deporte == "nba")
    {
        NBA n;  // Objeto de NBA

        if (opcion == "jugadores") n.jugadores();
        else if (opcion == "pelota") n.pelota();
        else n.equipos();  // Muestra también las copas de los Lakers
    }

    // Si el usuario eligió NFL
    if (deporte == "nfl")
    {
        NFL nf;  // Objeto de NFL

        if (opcion == "jugadores") nf.jugadores();
        else if (opcion == "pelota") nf.pelota();
        else nf.equipos();  // Incluye las copas de los Patriots
    }

    // Terminamos el programa
    return 0;
}

