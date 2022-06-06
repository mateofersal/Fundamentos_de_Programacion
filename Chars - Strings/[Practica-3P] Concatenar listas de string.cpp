//ejercicio de concatenar listas de string

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

void concatenar_vec(string V[], string X[], string C[], int n, int m) {		//concatena dos vectores en uno nuevo

	int aux = 0;

	for (int i = 0; i < n; i++) {

		C[i] = V[i];
	}
	for (int i = n; i < m + n; i++) {

		C[i] = X[aux];

		aux++;
	}
}

void show_vec(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "\n";
	}
}


int main() {

	string nombre[50], nombre2[50], nombre3[50];
	int n, m;

	cout << "Tamano primer lista: "; cin >> n;
	lect_vect(nombre, n);

	cout << "Tamano segunda lista: "; cin >> m;
	lect_vect(nombre2, m);

	concatenar_vec(nombre, nombre2, nombre3, n, m);

	cout << "\n\nLista concatenada: \n";
	show_vec(nombre3, n + m);

	return 0;
}
