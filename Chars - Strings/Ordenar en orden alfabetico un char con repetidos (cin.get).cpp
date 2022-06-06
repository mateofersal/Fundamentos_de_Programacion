// ordena los elementos de un char en orden alfabetico ( de menor a mayor)

#include<iostream>
#include<string>
#include<string.h>
#include"string.h"
using namespace std;

void show_vec(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << " ";
	}
}

void ordenar_men_may(char V[], int n) {

	char aux;

	for (int k = 1; k < n - 1; k++) {

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
	char frase[50];

	cout << "Frase: "; cin.get(frase, 50);
	n = strlen(frase);

	ordenar_men_may(frase, n);

	cout << "\nEl vector ordenado de menor a mayor es:"; show_vec(frase, n);

	return 0;
}
