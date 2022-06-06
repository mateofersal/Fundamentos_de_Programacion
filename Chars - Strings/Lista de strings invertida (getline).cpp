// de una lista de strings (con espacios porque usa getline) crea la lista invertida y la imprime

#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		getline(cin, V[i]);

	}
}

void show_vec(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "\n";
	}
}

void new_vec_inv(string V[], string X[], int n) {

	int m = n - 1;

	for (int i = 0; i < n; i++, m--) {

		X[m] = V[i];

	}
}

int main() {

	string lista[50], lista_2[50];
	int n;

	cout << "Digite el tamano de la lista: "; cin >> n;
	cin.ignore();
	lect_vect(lista, n);
	cout << "\n";

	new_vec_inv(lista, lista_2, n);

	cout << "\nLa lista invertida es: \n";
	show_vec(lista_2, n);
	cout << "\n\n";

	return 0;
}
