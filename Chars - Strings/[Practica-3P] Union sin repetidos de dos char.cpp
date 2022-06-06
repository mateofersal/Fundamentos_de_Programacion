#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i];
	}
}

void eliminar_repetidos(char V[], int n) {

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
	show_vec(V, n);				//imprime el vector sin los elementos repetidos con el tamaño n reducido
}

void concatenar_vec(char V[], char X[], char C[], int n, int m) {		//concatena dos vectores en uno nuevo

	int aux = 0;

	for (int i = 0; i < n; i++) {

		C[i] = V[i];
	}
	for (int i = n; i < m + n; i++) {

		C[i] = X[aux];

		aux++;
	}
}

int main() {

	char frase1[50], frase2[50], frase3[50];
	int n, m;

	cout << "Primera frase:"; cin.get(frase1, 50);
	n = strlen(frase1);
	cin.ignore();

	cout << "Segunda frase:"; cin.get(frase2, 50);
	m = strlen(frase2);

	cout << "\nPrimer vector: "; show_vec(frase1, n);

	cout << "\nSegundo vector: "; show_vec(frase2, m);

	cout << "\n\nLa union de vectores es: ";
	concatenar_vec(frase1, frase2, frase3, n, m);
	show_vec(frase3, n + m);

	cout << "\nLa union sin repetidos es: ";
	eliminar_repetidos(frase3, m + n);
}

