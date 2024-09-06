#include <iostream>
using namespace std;
#include "Arbol.h"
#include <string>

using namespace std;

int main() {
    Arbol* tree= new Arbol();
    // Crear un array de 256 posiciones (una para cada caracter ASCII).
    int frecuencias[256] = { 0 };

    // Pedir al usuario que ingrese una frase.
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    // Recorrer la frase y contar la frecuencia de cada caracter.
    for (char c : frase) {
        frecuencias[(unsigned char)c]++;  // Incrementar la posición correspondiente en el array.
    }

    // Mostrar las frecuencias de los caracteres.
    cout << "Frecuencia de los caracteres:" << endl;
    for (int i = 0; i < 256; i++) {
        if (frecuencias[i] > 0) {  // Solo mostrar caracteres que aparecen en la frase.
            cout << "'" << char(i) << "': " << frecuencias[i] << endl;
        }
    }
    tree = new Arbol(frecuencias);

    

    return 0;
}
