//dado un vector de ventas, mostrar las tres mayores ventas (mostrar los 3 valores mas altos)

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void ordenar_may_men(float V[], int n) {						//ordena un vector de mayor a menor		

	float aux;

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

void lect_vect(float V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void show_vec(float V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

int main() {

	float A[50];
	int n;

	cout << "Digite el tamano del vector: "; cin >> n;
	lect_vect(A, n);

	ordenar_may_men(A, n);

	cout << "Las ventas mas altas fueron: ";
	show_vec(A, 3);


	return 0;
}

