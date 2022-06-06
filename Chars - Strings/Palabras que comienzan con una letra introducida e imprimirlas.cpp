// verificar cuantas palabras comienzan con una letra digitada, copiarlas e imprimirlas

#include <iostream>
#include <string.h>
using namespace std;

void letra_inicial(char texto[], char letra, int n) {

	char frase[100];
	int aux = 0;

	if (texto[0] == letra) {

		for (int i = 0; i < n && texto[i] != ' '; i++) {

			frase[aux] = texto[i];
			aux++;
		}
		frase[aux] = ' ';
		aux++;
	}

	for (int i = 0; i < n; i++) {

		while (texto[i] == ' ') {

			if (texto[i + 1] == letra) {

				for (int k = i + 1; k < n && texto[k] != ' '; k++) {

					frase[aux] = texto[k];
					aux++;
				}
				frase[aux] = ' ';
				aux++;

			}
			i++;
		}
	}
	frase[aux] = '\0';
	cout << "\nLas palabras son: " << frase;
}

int main() {

	char letra;
	char texto[100];
	int n;

	cout << "Texto: "; cin.get(texto, 100);
	n = strlen(texto);
	cout << "\nLetra a revisar: "; cin >> letra;
	cout << letra;

	letra_inicial(texto, letra, n);


	return 0;
}

