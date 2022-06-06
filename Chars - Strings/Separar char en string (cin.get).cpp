//separar en un vector string cada palabra de un vector char

#include <iostream>
#include <string.h>
using namespace std;

int separar(char texto[], string lista[], int n) {

    int size = 0;

    for (int i = 0; i < n; i++) {

        if (texto[i] != ' ') {

            lista[size] = lista[size] + texto[i];
        }
        else {

            size++;
        }
    }
    return size + 1;
}

void show_vec(string lista[], int size) {

    for (int i = 0; i < size; i++) {

        cout << lista[i] << "\n";
    }
}


int main() {

    string lista[20];
    char texto[100];
    int n;
    int aux = 0;

    cout << "Texto:";
    cin.get(texto, 100);
    n = strlen(texto);

    int size = separar(texto, lista, n);

    show_vec(lista, size);


    return 0;
}

