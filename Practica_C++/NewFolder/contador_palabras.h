#ifndef CONTADOR_PALABRAS_H
#define CONTADOR_PALABRAS_H

#include <iostream>
#include <string>

using namespace std;

// Función que cuenta las letras en una frase
int contarLetras(const string& frase) {
    int contador = 0;
    for (char c : frase) {
        if (isalnum(c)) { // Contar solo caracteres alfanuméricos
            contador++;
        }
    }
    return contador;
}

// Función principal para contar las palabras
void ejecutarContadorPalabras() {
    int cantidadFrases;
    cout << "Ingrese cuantas frases desea ingresar: ";
    cin >> cantidadFrases;
    cin.ignore();  // Limpiar el buffer de entrada

    for (int i = 1; i <= cantidadFrases; i++) {
        string frase;
        cout << "Ingrese la frase " << i << ": ";
        getline(cin, frase);
        int numLetras = contarLetras(frase);
        cout << "La frase tiene " << numLetras << " letras.\n";
    }
}

#endif
