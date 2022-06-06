// maxima diferencia entre pares e impares

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

int mayor(int V[], int n) {

    int mayor = V[0];

    for (int i = 0; i < n; i++) {

        if (V[i] > mayor) {

            mayor = V[i];
        }
    }
    return mayor;
}

int menor(int V[], int n) {						//obtiene el valor mas bajo de un vector

    int minimo = V[0];

    for (int i = 1; i < n; i++) {

        if (V[i] < minimo) {

            minimo = V[i];
        }
    }
    return minimo;
}

void clasificacion(int V[], int B[], int C[], int n) {

    int cont_par = 0;
    int cont_impar = 0;

    for (int i = 0; i < n; i++) {

        if (V[i] % 2 == 0) {

            B[cont_par] = V[i]; https://www.ilovepdf.com/
        cont_par++;
        }
        if (V[i] % 2 != 0) {

            C[cont_impar] = V[i];
            cont_impar++;
        }

    }
    int mayor_par = mayor(B, cont_par);
    int menor_impar = menor(C, cont_impar);

    cout << "\nMayor par: " << mayor_par;
    cout << "\nMenor impar: " << menor_impar;

    cout << "\nLa diferencia mayor par - menor impar es: " << mayor_par - menor_impar;
}

int main() {

    int A[50], B[50], C[50];
    int n;

    cout << "Digite tamano: "; cin >> n;

    lect_vect(A, n);

    clasificacion(A, B, C, n);
}

