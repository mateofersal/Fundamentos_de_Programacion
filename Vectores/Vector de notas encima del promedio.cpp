// de las notas de un curso saques un promedio y que mostres cuales notas estC!n encima del promedio

#include<iostream>
using namespace std;

float promedio(int V[], int n) {					//obtiene la suma de elementos de un vector para despues divirlos entre 'n' en el main

    float s = 0;

    for (int i = 0; i < n; i++) {

        s = s + V[i];
    }
    return s / n;
}

void lect_vect(int V[], int n) {					//lectura de elementos de un vector

    for (int i = 0; i < n; i++) {

        cout << "Posicion " << i << ": "; cin >> V[i];
    }
}

void show_vec(int V[], int n, float prom) {							//muestra un vector

    for (int i = 0; i < n; i++) {

        if (V[i] > prom) {

            cout << V[i] << "  ";
        }
    }
}

int main() {

    int A[20];
    int n;

    cout << "Tamano: "; cin >> n;
    cout << "\nVector: \n"; lect_vect(A, n);

    float prom = promedio(A, n);
    cout << "\nEl promedio de notas es: " << prom;

    cout << "\n\nNotas encima del promedio son: ";
    show_vec(A, n, prom);
    return 0;
}

