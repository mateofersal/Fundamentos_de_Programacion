//sacar promedios de dos valores consecutivos

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void promedio(float V[], int n) {

	float prom = 0;

	for (int i = 0; i < n - 1; i++) {

		prom = (V[i] + V[i + 1]) / 2;

		cout << "P" << i + 1 << "=" << prom << "  ";

		prom = 0;
	}
}

void lect_vect(float V[], int n) {					//lectura de elementos de un vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int main() {

	float A[50];
	int n;

	cout << "Tamano del vector: "; cin >> n;
	lect_vect(A, n);

	cout << "\nLos promedios son: \n";
	promedio(A, n);
}
