//dados dos vectores de tamaño igual, hacer un tercer vector con los valores comunes de ambos vectores

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int comunes(int V[], int X[], int C[], int n, int m) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {

			if (V[i] == X[k]) {

				C[size] = V[i];
				size++;
			}
		}
	}
	return size;
}

void eliminar_repetido(int V[], int n) {

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
	show_vec(V, n);
}

int main() {

	int n, m;
	int A[50], B[50], C[50];

	cout << "Tamano del vec1 : "; cin >> n;
	cout << "\nPrimer vector: \n"; lect_vect(A, n);

	cout << "\nTamano del vec2 : "; cin >> m;
	cout << "\nSegundo vector: \n"; lect_vect(B, m);

	cout << "\nVector de los comunes\n";
	int size = comunes(A, B, C, n, m);

	eliminar_repetido(C, size);

	return 0;
}


