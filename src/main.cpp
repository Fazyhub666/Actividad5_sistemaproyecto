#include <iostream>
#include <cstring>
using namespace std;

// Definicion de la estructura
struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica;
};

// Prototipo de la funcion
void cargarDatos(EntidadProyecto* ptr);

int main() {

    // Inicializacion de la estructura
    EntidadProyecto miEntidad = {0, "Vacio", 0.0f};

    cout << "==========================================" << endl;
    cout << "       MODELADO STRUCT - C++" << endl;
    cout << "==========================================" << endl;

    // Enviamos la direccion de memoria de la estructura
    cargarDatos(&miEntidad);

    // Mostramos los datos registrados
    cout << "\n=== DATOS REGISTRADOS ===" << endl;

    cout << "ID: " << miEntidad.id << endl;
    cout << "Nombre: " << miEntidad.nombre << endl;
    cout << "Metrica: " << miEntidad.metrica << endl;
    cout << "Direccion de memoria RAM: " << &miEntidad << endl;

    cout << "==========================================" << endl;

    return 0;
}

// Funcion para cargar los datos mediante un puntero
void cargarDatos(EntidadProyecto* ptr) {

    cout << "\n--- INGRESO DE DATOS ---" << endl;

    cout << "Ingrese el ID de la entidad: ";
    cin >> ptr->id;

    // Limpiamos el buffer de entrada
    cin.ignore();

    cout << "Ingrese el nombre o descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "Ingrese la metrica de operacion: ";
    cin >> ptr->metrica;
}
