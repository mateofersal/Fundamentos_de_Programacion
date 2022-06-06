// ingresar un vector string y ordenarlo alfabeticamenta luego mostrat por cada elemento las veces que 'a' se repite

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(string V[], int n) {

    string auxiliar = "";
    int size;
    int cont = 0;

    for (int i = 0; i < n; i++) {

        auxiliar = V[i];
        size = V[i].size();
        cout << V[i];

        for (int k = 0; k < size; k++) {

            if (auxiliar[k] == 'A' || auxiliar[k] == 'a') {

                cont++;
            }
        }
        cout << " Su cantidad de vocales 'a' es: " << cont;
        cout << "\n";
        cont = 0;
    }
}

void lect_vect(string alumnos[], int n) {

    for (int i = 0; i < n; i++) {

        cin >> alumnos[i];
    }
}

void ordenar_men_may(string V[], int n) {

    string aux;

    for (int k = 1; k < n; k++) {

        for (int i = 0; i < n - k; i++) {

            if (V[i] > V[i + 1]) {

                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
            }
        }
    }
}


int main() {

    int n;
    string alumnos[10];

    cout << "Cantidad de alumnos: "; cin >> n;
    lect_vect(alumnos, n);

    ordenar_men_may(alumnos, n);
    cout << "\nOrdenados alfabticamente: \n"; show_vec(alumnos, n);



    return 0;
}


