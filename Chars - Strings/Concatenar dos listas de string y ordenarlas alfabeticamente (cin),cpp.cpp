#include<iostream>
#include<string>
#include<string.h>
#include"string.h"
using namespace std;

void concatenar(string lista1[], string lista2[], string lista3[], int n, int m) {        // concatena dos char

    int aux = 0;

    for (int i = 0; i < n; i++) {

        lista3[i] = lista1[i];
    }
    for (int i = n; i < n + m; i++) {

        lista3[i] = lista2[aux];
        aux++;
    }
}

void lect_vect(string V[], int n) {

    for (int i = 0; i < n; i++) {

        cin >> V[i];
    }
}

void ordenar(string frase[], int n) {     // ordena de menor a mayor (orden alfabetico) (bubble)

    string aux;

    for (int k = 1; k < n; k++) {

        for (int i = 0; i < n - 1; i++) {

            if (frase[i] > frase[i + 1]) {

                aux = frase[i];
                frase[i] = frase[i + 1];
                frase[i + 1] = aux;
            }
        }
    }
}

void show_vec(string V[], int n) {

    for (int i = 0; i < n; i++) {

        cout << V[i] << " ";
    }
}


int main() {

    string frase1[10], frase2[10], frase3[20];
    int n, m, size;

    cout << "Tamano vec1: "; cin >> n; lect_vect(frase1, n);
    cout << "Tamano vec2: "; cin >> m; lect_vect(frase2, m);

    concatenar(frase1, frase2, frase3, n, m);

    ordenar(frase3, n + m);

    show_vec(frase3, n + m);


    return 0;
}

