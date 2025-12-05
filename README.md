# Proyecto-2-Programacion

# Contexto
Una persona dueña de una restaurante que transmite diversos deportes necesita generar un código que le explique brevemente estos deportes a sus clientes para que puedan entender y disfrutar de ellos mientras están en el restaurante. Debido a esto genera un programa con diversas clases que resuelve diferentes dudas de los deportes en cuestión, ya sea como jugadores o equipos famosos, las copas que tenga, balón, etc. Así permitiendo que la gente disfrute mas de la estancia en su restaurante y a su vez tenga mas clientes nuevos.

# Funcionalidad
El programa tiene como objetivo permitir que el usuario consulte información básica sobre tres deportes específicos:
Fútbol de la liga española, Basketball de la NBA, Fútbol americano de la NFL

Consiste en recibir del usuario un deporte y, posteriormente, preguntarle qué información desea saber respecto a ese deporte. El programa debe procesar estas entradas y mostrar la información correspondiente.

Este programa puede ser muy útil para personas que busquen información sobre estos deportes o quieran saber las similitudes y diferencias entre cada uno de ellos.

# Para que sirve
El código sirve para consultar ciertas dudas sobre los deportes de los que se requiere, cosas como jugadores famosos, equipos relevantes, o forma de la pelota. Mas que nada sirve para la gente que apenas tiene conocimiento del tema, pero quiere saber un poco más en general del deporte y sus detalles.

# Para que no sirve
Mi código no es una página completa de información relevante de los deportes, no contiene todas las dudas que podría haber, al igual que tampoco es un consultor de estadísticas de jugadores o equipos en tiempo real, es un consultor de dudas básicas para los que estan perdidos y no tienen nociones de ese deporte.

# Como se usa
- Compilar el proyecto con un compilador C++.
- Ejecutar el programa.
- Responde la pregunta sobre que deporte quisieras saber (Futbok Español, NBA, NFL).
- Responde que quieres saber (pelota, jugadores equipos).
- En caso de ser pelota, te da una descripción breve de como es la pelota.
- En caso de ser jugadores, te dice los jugadores mas relevantes del deporte.
- En caso de ser equipos, te muestra los equipos mas famosos y te dice el número de copas de ellos.

# Diagrama de clases

<img width="1414" height="1418" alt="Diagrama de clases (3)" src="https://github.com/user-attachments/assets/4e2bc9c8-0b03-4280-ae4c-59c80338ecb0" />

# Correcciones
- Se arregló el read me
- Se añadio atributos, getters, setters y constructor.
- Se arregó la herencia y el main
- Se corrigió el UML para que coincidiera con el código
- Se agregó composición

# Consideraciones
Para compilar y ejecutar el programa desde la terminal, siga estos pasos:

- Ubíquese en la carpeta donde se encuentra main.cpp junto con todos los archivos .h.
- Siguiente a eso, ejecute el siguiente comando:
```bash
g++ main.cpp -o consultor_deportivo
```
- Después ejecute el siguiente comando: .\consultor_deportivo.exe


