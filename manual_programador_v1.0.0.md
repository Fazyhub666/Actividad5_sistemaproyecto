# Manual del Programador
**Actividad 5: Modelado de datos con estructuras (Struct) y punteros**

**Materia:** Laboratorio de Programación  
**Institución:** EEST N.º 1 – Eduardo Ader  
**Curso:** 5.º 3.ª  
**Versión:** 1.0.0  
**Lenguaje:** C++

---

## 1. Introducción

El presente manual tiene como objetivo documentar el funcionamiento y la estructura del programa desarrollado para la Actividad 5 de Laboratorio de Programación.

El proyecto consiste en utilizar estructuras (`struct`) y punteros en C++ para organizar y modificar diferentes tipos de datos. También se explica el uso del operador flecha (`->`), el pasaje de direcciones de memoria a funciones y el ingreso de información mediante el teclado.

## 2. Requisitos del sistema

Para desarrollar, compilar y ejecutar el programa se necesita:

- Un sistema operativo Windows.
- Visual Studio Code o un entorno de programación compatible con C++.
- Un compilador C++, como G++ (MinGW/MSYS2).
- Alternativamente, se puede utilizar OnlineGDB para compilar y ejecutar el código desde el navegador.

## 3. Estructura del programa

El programa está compuesto por las siguientes partes:

- **Bibliotecas:** permiten utilizar las funciones de entrada y salida de datos.
- **Estructura EntidadProyecto:** agrupa los datos de la entidad.
- **Función cargarDatos():** recibe un puntero y permite ingresar información.
- **Función main():** inicializa la estructura, llama a la función de carga y muestra los resultados.

### 3.1. Bibliotecas utilizadas

```cpp
#include <iostream>
#include <cstring>

using namespace std;
```

- `iostream`: permite utilizar `cin` y `cout` para ingresar y mostrar información.
- `cstring`: proporciona funciones para trabajar con cadenas de caracteres. En esta versión del programa no se utilizan funciones específicas de esta biblioteca.

### 3.2. Definición de la estructura

```cpp
struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica;
};
```

La estructura `EntidadProyecto` permite agrupar tres variables de distintos tipos:

| Variable | Tipo | Función |
|---|---|---|
| id | int | Identifica la entidad. |
| nombre | char[50] | Almacena su nombre o descripción. |
| metrica | float | Guarda un valor decimal de operación. |

El uso de `struct` permite mantener relacionados los datos de una misma entidad y facilita su organización.

### 3.3. Prototipo de la función

```cpp
void cargarDatos(EntidadProyecto* ptr);
```

Esta declaración indica que existe una función llamada `cargarDatos`, que recibe un puntero a una estructura de tipo `EntidadProyecto`.

El puntero permite acceder y modificar directamente los datos de la estructura original.

### 3.4. Función principal (main)

```cpp
int main() {

    EntidadProyecto miEntidad = {0, "Vacio", 0.0f};

    cout << "MODELADO STRUCT - C++" << endl;

    cargarDatos(&miEntidad);

    cout << "\n=== DATOS REGISTRADOS ===" << endl;

    cout << "ID: " << miEntidad.id << endl;
    cout << "Nombre: " << miEntidad.nombre << endl;
    cout << "Metrica: " << miEntidad.metrica << endl;
    cout << "Direccion de memoria RAM: " << &miEntidad << endl;

    return 0;
}
```

La función principal realiza las siguientes operaciones:

1. Inicializa una variable llamada `miEntidad` con valores predeterminados.
2. Llama a la función `cargarDatos()` enviándole la dirección de memoria mediante el operador `&`.
3. Muestra los datos ingresados.
4. Muestra la dirección de memoria donde se encuentra almacenada la estructura.
5. Finaliza el programa.

### 3.5. Función cargarDatos()

```cpp
void cargarDatos(EntidadProyecto* ptr) {

    cout << "\n--- INGRESO DE DATOS ---" << endl;

    cout << "Ingrese el ID de la entidad: ";
    cin >> ptr->id;

    cin.ignore();

    cout << "Ingrese el nombre o descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "Ingrese la metrica de operacion: ";
    cin >> ptr->metrica;
}
```

Esta función permite ingresar los datos de la entidad utilizando un puntero.

Se utiliza el operador flecha (`->`) para acceder a los miembros de la estructura a través del puntero.

También se utiliza `cin.ignore()` para limpiar el salto de línea pendiente en el buffer de entrada antes de utilizar `getline()`, evitando que se omita la lectura del nombre o descripción.

## 4. Conceptos técnicos utilizados

### 4.1. Estructuras (struct)

Una estructura es un tipo de dato que permite agrupar diferentes variables bajo un mismo nombre. Cada variable dentro de ella se denomina miembro o atributo.

En este programa, `EntidadProyecto` reúne el identificador, el nombre y la métrica de una entidad.

### 4.2. Punteros

Un puntero es una variable que almacena una dirección de memoria.

En el programa se utiliza:

```cpp
EntidadProyecto* ptr;
```

Esto permite trabajar con la dirección de una estructura sin necesidad de crear una copia completa de ella.

### 4.3. Operador flecha (->)

El operador flecha permite acceder a los miembros de una estructura mediante un puntero.

Por ejemplo:

```cpp
ptr->id;
ptr->nombre;
ptr->metrica;
```

Es equivalente a utilizar:

```cpp
(*ptr).id;
(*ptr).nombre;
(*ptr).metrica;
```

Se utiliza `->` porque `ptr` es un puntero y no una variable de estructura directa.

### 4.4. Pasaje por dirección

Para enviar la dirección de una variable a una función se utiliza el operador `&`.

En este caso:

```cpp
cargarDatos(&miEntidad);
```

De esta manera, la función recibe la dirección de la estructura original y puede modificar sus miembros directamente.

### 4.5. Buffer de entrada y cin.ignore()

Cuando se utiliza `cin` para ingresar un número, el salto de línea generado al presionar Enter puede quedar pendiente en el buffer.

La instrucción:

```cpp
cin.ignore();
```

permite descartar ese carácter pendiente para que la siguiente lectura mediante `getline()` funcione correctamente.

## 5. Compilación y ejecución

Para compilar el programa desde la terminal de Visual Studio Code, se deben ejecutar los siguientes comandos desde la carpeta principal del proyecto.

**Compilación:**

```powershell
g++ src/main.cpp -o src/sistemaproyecto.exe
```

**Ejecución:**

```powershell
.\src\sistemaproyecto.exe
```

Si se utiliza OnlineGDB, se debe copiar el código en el editor, seleccionar C++ y presionar el botón de ejecución.

## 6. Ejemplo de funcionamiento

Al ejecutar el programa, se solicitan tres datos al usuario:

- ID de la entidad.
- Nombre o descripción.
- Métrica de operación.

Por ejemplo, si se ingresan los siguientes valores:

```text
ID: 1
Nombre: Sensor de temperatura
Metrica: 25.5
```

El programa mostrará los datos registrados y la dirección de memoria de la estructura.

La dirección de memoria puede variar en cada ejecución.

## 7. Posibles modificaciones

El programa puede adaptarse para representar diferentes entidades o componentes del Proyecto Integrador Anual.

Por ejemplo, se pueden modificar los miembros de `EntidadProyecto` para almacenar información específica de sensores, dispositivos o módulos de hardware.

También se pueden agregar nuevos atributos o funciones para ampliar sus capacidades, manteniendo la organización mediante estructuras y punteros.

## 8. Conclusión

El desarrollo de este programa permitió aplicar conceptos fundamentales de C++, como las estructuras, los punteros y el acceso a los miembros mediante el operador flecha. La documentación de estos elementos facilita la comprensión del código y permite que otros programadores puedan modificarlo, mantenerlo o utilizarlo como base para futuros desarrollos del P.I.A.(Proyecto Integrador Anual).
