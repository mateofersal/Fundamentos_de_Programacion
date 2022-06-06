#include <iostream>
#include <string.h>
#include<string>
#include"string.h"
using namespace std;

void reemplazar(char frase[], int n) {

    for (int i = 0; i < n; i++) {

        if (frase[i] == ' ') {

            frase[i] = ',';
        }
    }
}

void show_vec(char frase[], int n) {

    for (int i = 0; i < n; i++) {

        cout << frase[i];
    }
    frase[n] = '.';
    cout << frase[n];
}

int main() {

    int n;
    char frase[100];

    cout << "Frase: "; cin.get(frase, 100);
    n = strlen(frase);

    reemplazar(frase, n);
    show_vec(frase, n);


    return 0;
}


