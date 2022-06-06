// vector float de ventas e imprimis las tres mayores ventas

#include<iostream>
using namespace std;

void lect_vect(int V[], int n) {

    for (int i = 0; i < n; i++) {

        cout << i << ": "; cin >> V[i];
    }
}

void show_vec(int V[], int n) {

    for (int i = 0; i < n; i++) {

        cout << V[i] << " ";
    }
}

void ordenar_may_men(int V[], int n) {

    int aux;

    for (int k = 1; k < n - 1; k++) {

        for (int i = 0; i < n - k; i++) {

            if (V[i] < V[i + 1]) {

                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;

            }
        }
    }
}

void ordenar_men_may(int V[], int n) {

    int aux;

    for (int k = 1; k < n - 1; k++) {

        for (int i = 0; i < n - k; i++) {

            if (V[i] > V[i + 1]) {

                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;

            }
        }
    }
}

void copy(int V[], int X[], int n) {

    for (int i = 0; i < n; i++) {

        X[i] = V[i];
    }
}


int main() {

    int A[50], B[50];
    int n;

    cout << "Digite tamano: "; cin >> n;

    lect_vect(A, n);

    copy(A, B, n);

    ordenar_may_men(A, n);

    ordenar_men_may(B, n);

    cout << "\nLas 3 mayores ventas: ";
    show_vec(A, 3);

    cout << "\nLas 3  menores ventas: ";
    show_vec(B, 3);

    return 0;
}
