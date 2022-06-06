#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(string palabras[], int n) {

    for (int i = 0; i < n; i++) {

        cin >> palabras[i];
    }
}

void mayus(string palabras[], int n) {

    string auxiliar = "";

    cout << "\nPalabras con primera mayuscula: ";
    for (int i = 0; i < n; i++) {

        auxiliar = palabras[i];
        auxiliar[0] = toupper(auxiliar[0]);

        cout << auxiliar << " ";
        auxiliar = "";
    }
}

void minusculas(string palabras[], int n) {

    string auxiliar = "";
    int size;

    cout << "\nPalabras con todo minuscula menos la primera: ";
    for (int i = 0; i < n; i++) {

        size = palabras[i].size();
        auxiliar = palabras[i];

        for (int k = 0; k < size; k++) {

            auxiliar[k + 1] = tolower(auxiliar[k + 1]);
        }
        cout << auxiliar << " ";
        auxiliar = "";
    }
}

void todo_mayus(string palabras[], int n) {

    string auxiliar = "";
    int size;

    cout << "\nPalabras con todo mayuscula: ";
    for (int i = 0; i < n; i++) {

        size = palabras[i].size();
        auxiliar = palabras[i];

        for (int k = 0; k < size; k++) {

            auxiliar[k] = toupper(auxiliar[k]);
        }
        cout << auxiliar << " ";
        auxiliar = "";
    }
}

int main() {

    string palabras[10];
    int n;
    cout << "Cantidad de lineas: "; cin >> n;

    lect_vect(palabras, n);

    mayus(palabras, n);
    minusculas(palabras, n);
    todo_mayus(palabras, n);


    return 0;
}

