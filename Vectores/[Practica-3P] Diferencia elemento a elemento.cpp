//Calcular las diferencias elemento a elemento de dos vectores

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void diferencia_elemento(int V[], int X[], int C[], int n) {

	for (int i = 0; i < n; i++) {

		C[i] = V[i] - X[i];
	}
}

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

int valor_max(int V[], int n) {						//obtiene el valor mas alto de un vector

	int maximo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] > maximo) {

			maximo = V[i];
		}
	}
	return maximo;
}

int valor_min(int V[], int n) {						//obtiene el valor mas bajo de un vector

	int minimo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] < minimo) {

			minimo = V[i];
		}
	}
	return minimo;
}


int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano vectores: "; cin >> n;

	cout << "\nPrimer vector \n"; lect_vect(A, n);
	cout << "\nSegundo vector \n"; lect_vect(B, n);

	cout << "\nVector de diferencias: ";
	diferencia_elemento(A, B, C, n);				//obtiene las diferencuias en un nuevo vector

	show_vec(C, n);									//imprime las diferencias

	cout << "\nValor mayor: " << valor_max(C, n);
	cout << "\nValor menor: " << valor_min(C, n);


}
