#include <iostream>
#include <windows.h> // Para cambiar el color de la consola
#include "contador_palabras.h"
#include "calculadora.h"

using namespace std;

// Función para cambiar el color de la consola
void cambiarColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Función para limpiar la pantalla
void limpiarPantalla() {
    system("cls");
}

int main() {
    int opcion;
    do {
        cambiarColor(11); // Color azul claro para el menú
        cout << "==== MENU DE OPCIONES ====\n";
        cout << "1. Ejercicio 1: Contador de Palabras\n";
        cout << "2. Ejercicio 2: Calculadora\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
            case 1:
                cambiarColor(10); // Color verde para el contador de palabras
                ejecutarContadorPalabras();
                limpiarPantalla(); // Limpiar pantalla después de la ejecución
                break;
            case 2:
                cambiarColor(14); // Color amarillo para la calculadora
                ejecutarCalculadora();
                limpiarPantalla(); // Limpiar pantalla después de la ejecución
                break;
            case 3:
                cambiarColor(12); // Color rojo para salir
                cout << "Saliendo del programa... Adios!\n";
                break;
            default:
                cambiarColor(12); // Color rojo para errores
                cout << "Opcion no valida, intente de nuevo.\n";
        }
    } while (opcion != 3);

    return 0;
}
