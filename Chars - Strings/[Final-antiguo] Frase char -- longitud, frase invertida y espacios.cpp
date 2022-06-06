// de una frase char calcular su longitud, frase invertida y espacios

#include<iostream>
#include<string.h>
using namespace std;

void invertir(char frase[], int n) {

    int m = n - 1;
    char aux;

    for (int i = 0; i < n / 2; i++, m--) {

        aux = frase[i];
        frase[i] = frase[m];
        frase[m] = aux;

    }
}

void show_vec(char V[], int n) {

    for (int i = 0; i < n; i++) {

        cout << V[i];
    }
}

int contar(char V[], int n) {

    int cont = 0;

    for (int i = 0; i < n; i++) {

        if (V[i] == ' ') {

            cont++;
        }
    }
    return cont;
}

int main() {

    char frase[100];

    cout << "Frase:";
    cin.get(frase, 100);

    int n = strlen(frase);

    cout << "\nLa longitud de la frase es de:" << n << " caracteres";

    invertir(frase, n);

    cout << "\nLa frase invertida es: ";
    show_vec(frase, n);

    cout << "\nLa cantidad de espacios es de: " << contar(frase, n);

}


