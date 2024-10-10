#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <cmath> // Para funciones avanzadas como seno, coseno, tangente, etc.

using namespace std;

// Función para operaciones básicas
void calculadoraBasica(double num1, double num2) {
    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
        cout << "Residuo: " << fmod(num1, num2) << endl;
    } else {
        cout << "Error: Division por cero no permitida.\n";
    }
}

// Función para operaciones avanzadas
void calculadoraAvanzada(double num) {
    cout << "Seno: " << sin(num) << endl;
    cout << "Coseno: " << cos(num) << endl;
    cout << "Tangente: " << tan(num) << endl;
    if (num >= 0) {
        cout << "Raiz cuadrada: " << sqrt(num) << endl;
    } else {
        cout << "Error: Raiz cuadrada de numero negativo no es posible.\n";
    }
    if (num > 0) {
        cout << "Logaritmo natural: " << log(num) << endl;
    } else {
        cout << "Error: Logaritmo de numero no positivo no es posible.\n";
    }
    cout << "Redondeo hacia arriba: " << ceil(num) << endl;
    cout << "Redondeo hacia abajo: " << floor(num) << endl;
}

// Función principal para la calculadora
void ejecutarCalculadora() {
    int opcion;
    cout << "CALCULADORA\n";
    cout << "1. Basica\n";
    cout << "2. Avanzada\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            double num1, num2;
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            calculadoraBasica(num1, num2);
            break;
        }
        case 2: {
            double num;
            cout << "Ingrese un numero: ";
            cin >> num;
            calculadoraAvanzada(num);
            break;
        }
        default:
            cout << "Opcion no valida.\n";
    }
}

#endif
