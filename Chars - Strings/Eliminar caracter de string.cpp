#include<iostream>
#include<string>
#include<string.h>
#include"string.h"
using namespace std;

void elimina_caracter(string frase, int n, char caracter) {

    int size = n;

    for (int i = 0; i < n; i++) {

        if (frase[i] == caracter) {            // solo se debe cambiar el caracter en esta condicion

            for (int k = i; k < n; k++) {

                frase[k] = frase[k + 1];
            }
            size--;
        }

    }
    for (int m = 0; m < size; m++) {

        cout << frase[m];
    }
}

int main() {

    int n;
    string frase;
    char caracter;

    cout << "Frase: "; getline(cin, frase);
    n = frase.size();

    cout << "Caracter a borrar: "; cin >> caracter;

    elimina_caracter(frase, n, caracter);
}

