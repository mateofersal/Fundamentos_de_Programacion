// borra palabras

#include <iostream>
#include <string.h>
using namespace std;

int separar(char frase[], string palabras[], int n) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != ' ') {

			palabras[aux] = palabras[aux] + frase[i];
		}
		else {

			aux++;
		}
	}
	return aux + 1;
}

int eliminacion(string frase[], string seleccion, int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (frase[i] == seleccion) {

			for (int k = i; k < n; k++) {

				frase[k] = frase[k + 1];
			}
			size--;
		}
	}
	return size;
}

void show_vec(string frase[], int n) {

	for (int i = 0; i < n; i++) {

		cout << frase[i] << " ";
	}
}

int main() {

	string palabras[20], seleccion;
	char frase[100];

	cout << "Digite la frase: "; cin.get(frase, 100);
	int n = strlen(frase);
	cout << "\Palabra a borrar: "; cin >> seleccion;
	cout << "\n";

	int a = separar(frase, palabras, n);
	int b = eliminacion(palabras, seleccion, a);

	cout << "La frase con las eliminaciones es: ";
	show_vec(palabras, b);
	cout << "\n";


	return 0;
}
