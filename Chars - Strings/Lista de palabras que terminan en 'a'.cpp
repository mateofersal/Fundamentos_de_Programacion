// copia las palabras que terninan en a
// usando un string auxiliar que acumula y se reinicia cuando ve un espacio
// y copia cuando detecta la letra anterior 'a' en la casilla de un vector string

#include <iostream>
#include <string.h>
#include<string>
#include"string.h"
using namespace std;

void final_a(char frase[], int n) {

	string auxiliar = "";
	string palabras[20];
	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != ' ') {

			auxiliar = auxiliar + frase[i];		// va acumulando hasta que encuentra espacio
		}
		else {

			if (frase[i - 1] == 'a') {

				palabras[aux] = auxiliar;
				aux++;
			}
			auxiliar = "";							// independientemente de si ve la ultima letra a o no, resetea el string para acumular la sgte palabra

		}
	}
	if (frase[n - 1] == 'a') {					// para verificar la ultima letra

		palabras[aux] = auxiliar;
	}
	aux++;
	for (int i = 0; i < aux; i++) {

		cout << palabras[i] << " ";
	}
}

int main() {

	int n;
	char frase[100];

	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	final_a(frase, n);

	return 0;
}

