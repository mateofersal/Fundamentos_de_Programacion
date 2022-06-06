#include <iostream>
using namespace std;

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void copy_vec(int V[], int X[], int n) {

	for (int i = 0; i < n; i++) {

		X[i] = V[i];
	}
}

int eliminar_repetido(int V[], int n) {

	for (int i = 0; i < n; i++) {

		for (int k = i + 1; k < n; k++) {

			while (V[i] == V[k]) {

				for (int j = k; j < n; j++) {

					V[j] = V[j + 1];
				}
				n--;
			}
		}
	}
	return n;
}

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << " ";
	}
}

void comparar(int V[], int X[], int n, int m) {

	int cont = 0;

	for (int i = 0; i < m; i++) {

		for (int k = 0; k < n; k++) {

			if (X[i] == V[k]) {

				cont++;
			}
		}
		cout << "Numero " << X[i] << " se repite " << cont << " veces" << " \n";
		cont = 0;
	}
}

int main() {

	int n;
	int A[50], B[50];

	cout << "Digite el tamano: "; cin >> n;

	lect_vect(A, n);
	copy_vec(A, B, n);

	cout << "\nEl vector normal es: ";
	show_vec(A, n);

	int m = eliminar_repetido(B, n);

	cout << "\n\nEl vector sin repetidos es: ";
	show_vec(B, m);
	cout << "\n\n";

	comparar(A, B, n, m);

	return 0;
}


