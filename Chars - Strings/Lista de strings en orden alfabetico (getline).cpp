// de una cantidad n de strings (nombre y apellido) los imprime en orden alfabetico

#include<iostream>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ":  "; getline(cin, V[i]);
	}
}

void show_vec(string V[], int n) {
	for (int i = 0; i < n; i++) {

		cout << V[i] << "\n";
	}
	cout << "\n";
}

void ordenar_men_may(string V[], int n) {

	string aux;

	for (int k = 1; k < n; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] > V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

int main() {

	int n;
	string A[50];

	cout << "Digite el tamaño del vector: "; cin >> n;
	cin.ignore(256, '\n');
	lect_vect(A, n);
	cout << "\n";

	ordenar_men_may(A, n);
	cout << "\n";

	cout << "\nEl vector ordenado alfabeticamente es: \n";
	show_vec(A, n);
	return 0;
}

