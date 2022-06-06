// dado un vector, escribir un numero para revisar y ver cuantas veces se repite en el vector

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];


	}
}

void revisar_num(int V[], int n, int num) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == num) {

			cont++;
		}
	}
	cout << "\nEl numero " << num << " se repite " << cont << " veces";
}

int main() {

	int A[50], C[50];
	int n, num;

	cout << "Digite el tamano del vector: "; cin >> n;
	lect_vect(A, n);

	cout << "\nNumero a revisar: "; cin >> num;

	revisar_num(A, n, num);

}
