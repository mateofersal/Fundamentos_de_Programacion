#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void invertir(string frase, int n) {         // invierte los caracteres del texto string

    for (int i = n; i >= 0; i--) {

        cout << frase[i];
    }
}

void invertir_vec(string palabras[], int n) {        // invierte las palabras del vector string creado

    for (int i = n; i >= 0; i--) {

        cout << palabras[i] << " ";
    }
}

int separar(string texto, string palabras[], int n) {        // crea el vector string a partir del texto string

    int aux = 0;

    for (int i = 0; i < n; i++) {

        if (texto[i] != ' ') {

            palabras[aux] = palabras[aux] + texto[i];
        }
        else {

            aux++;
        }
    }
    return aux + 1;
}

int main() {

    string palabras[10];
    string texto;
    int n;

    cout << "Texto: "; getline(cin, texto);
    n = texto.size();

    int size = separar(texto, palabras, n);

    cout << "Texto invertido: "; invertir(texto, n);

    cout << "\nPalabras en orden invertido: ";
    invertir_vec(palabras, size);
    return 0;
}







