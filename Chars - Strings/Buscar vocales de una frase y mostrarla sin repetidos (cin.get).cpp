#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

int vocal(char frase[], char vocales[], int n) {

	int cont = 0;
	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {

			vocales[aux] = frase[i];
			cont++;
			aux++;
		}
	}
	return cont;
}


void show_vec(char frase[], int n) {

	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}

void eliminar_repetido(char V[], int n) {

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
	cout << "\nVocales de la frase sin repetir: ";
	show_vec(V, n);
}


int main() {

	char frase[50];
	char vocales[50];
	int n, i;

	cout << "Frase:"; cin.get(frase, 50);
	n = strlen(frase);

	int size = vocal(frase, vocales, n);
	cout << "\nVocales de la frase: "; show_vec(vocales, size);

	eliminar_repetido(vocales, size);

	return 0;
}

