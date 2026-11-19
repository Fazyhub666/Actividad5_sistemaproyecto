# Modelado de Datos con Structs y Punteros en C++

Repositorio correspondiente a la **Actividad 5 de Laboratorio de Programación**, de 5.º3.ª de la EEST N.º 1 "Eduardo Ader".

##  Descripción del proyecto

Este proyecto consiste en desarrollar un programa en C++ que utiliza estructuras (`struct`) y punteros para organizar, almacenar y modificar diferentes tipos de datos.

Se trabaja con una estructura llamada `EntidadProyecto`, que contiene un identificador, un nombre o descripción y una métrica de operación.

El programa permite ingresar estos datos mediante el teclado, modificarlos utilizando punteros y el operador flecha (`->`), y mostrar la información almacenada junto con su dirección de memoria.

##  Objetivos

- Comprender el funcionamiento de las estructuras (`struct`) en C++.
- Agrupar diferentes tipos de datos dentro de una misma entidad.
- Aplicar conceptos de punteros y direcciones de memoria.
- Utilizar el operador flecha (`->`) para acceder a los miembros de una estructura.
- Comprender el pasaje por dirección a funciones.
- Aplicar estos conocimientos al Proyecto Integrador Anual.

##  Tecnologías utilizadas

- **Lenguaje:** C++.
- **Entorno de desarrollo:** Visual Studio Code.
- **Compilador:** G++ (MinGW/MSYS2).
- **Repositorio:** GitHub.

##  Estructura del repositorio

```text
sistemaproyecto/
│
├── .gitignore
├── LICENSE
├── README.md
│
├── docs/
│   ├── Informe.pdf
│   └── manuales/
│       └── manual_programador_v1.0.0.md
│
├── src/
│   └── main.cpp
│
└── capturas/
    └── ejecucion_struct.png
```

##  Funcionamiento del programa

El programa utiliza la estructura `EntidadProyecto`, compuesta por los siguientes miembros:

| Variable | Tipo de dato | Descripción |
|---|---|---|
| `id` | `int` | Identificador de la entidad. |
| `nombre` | `char[50]` | Nombre o descripción. |
| `metrica` | `float` | Valor decimal de operación. |

Mediante la función `cargarDatos()`, se recibe un puntero a la estructura para ingresar y modificar sus datos directamente.

Posteriormente, el programa muestra los valores registrados y la dirección de memoria de la entidad.

##  Compilación y ejecución

Para ejecutar el programa desde Visual Studio Code, es necesario contar con un compilador G++ instalado.

**1. Compilar el código:**

```powershell
g++ src/main.cpp -o src/sistemaproyecto.exe
```

**2. Ejecutar el programa:**

```powershell
.\src\sistemaproyecto.exe
```

También es posible utilizar OnlineGDB para compilar y ejecutar el código desde el navegador.

##  Evidencias

En la carpeta `capturas/` se encuentra la evidencia visual de la ejecución del programa, mostrando el ingreso de datos y los resultados obtenidos.

##  Documentación

Dentro de la carpeta `docs/` se encuentra el informe de la actividad, mientras que en `docs/manuales/` se incluye el Manual del Programador, donde se explica la estructura del código, los conceptos utilizados y el procedimiento de compilación y ejecución.

##  Autoría

**Institución:** EEST N.º 1 – Eduardo Ader  
**Materia:** Laboratorio de Programación  
**Curso:** 5.º3.ª  
**Actividad:** N.º 5 – Modelado de Datos con Structs y Punteros  
**Año:** 2026

**Estudiante:** Benjamin Hlynczuk

---

*Proyecto desarrollado con fines educativos en el marco de las actividades de Laboratorio de Programación.*
