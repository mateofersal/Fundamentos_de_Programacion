// dado un numero entero, desglosarlo y clasificar sus digitos en vectores de pares e impares

#include<iostream>
using namespace std;

int desglose(int V[], int num) {

    int aux = 0;

    while (num > 0) {

        int resto = num % 10;
        num = num / 10;

        V[aux] = resto;
        aux++;
    }
    return aux;

}

void show_vec(int V[], int n) {

    for (int i = 0; i < n; i++) {

        cout << V[i] << " ";
    }
}

void clasificacion(int V[], int B[], int C[], int n) {

    int cont_par = 0;
    int cont_impar = 0;

    for (int i = 0; i < n; i++) {

        if (V[i] % 2 == 0) {

            B[cont_par] = V[i];
            cont_par++;
        }
        if (V[i] % 2 != 0) {

            C[cont_impar] = V[i];
            cont_impar++;
        }

    }

    cout << "\n\nTamano vector pares: " << cont_par << " \n";
    show_vec(B, cont_par);
    cout << "\n\nTamano vector impares: " << cont_impar << " \n";
    show_vec(C, cont_impar);

}

int main() {

    int num;
    int A[50], B[50], C[50];

    cout << "Digite el numero: "; cin >> num;

    int n = desglose(A, num);

    cout << "Vector desglosado: ";
    show_vec(A, n);

    clasificacion(A, B, C, n);

    return 0;
}
