/*Pregunta Nro.: 2
Author: Mateo Fernandez Salvatierra
Fecha: 23-Nov-2021
Elaborar un programa que determine cuantas palabras comienzan con una vocal en una cadena introducida por teclado.

Entrada (texto): “Esta es una entrada de texto para probar número de palabras que inician con una vocal”

Salida: 6 palabras (Esta, es, una, entrada, inician, una)
*/

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void vocal_inicial(char V[], int n) {

	int aux = 0;
	int cont = 0;
	char palabra_vocal[100];																	//añadido un nuevo char que contenga todas las palabras que tienen vocal inicial

	if (V[0] == 'a' || V[0] == 'e' || V[0] == 'i' || V[0] == 'o' || V[0] == 'u') {				//if añadido para evaluar la palabra inicial

		for (int i = 0; i < n && V[i] != ' '; i++) {									//for añadido para copiar los elementos del char en un nuevo char

			palabra_vocal[aux] = V[i];
			aux++;
		}
		palabra_vocal[aux] = ' ';																// se coloca un caracter como espacio para separar las palabras y luego aux++ para entrar a la sgte posicion
		aux++;
		cont++;
	}

	for (int i = 0; i < n; i++) {

		while (V[i] == ' ') {								// cambio de != por ==

			if (V[i + 1] == 'a' || V[i + 1] == 'e' || V[i + 1] == 'i' || V[i + 1] == 'o' || V[i + 1] == 'u') {

				for (int k = i + 1; k < n && V[k] != ' '; k++) {						//for para copiar los elementos del char en el nuevo char				

					palabra_vocal[aux] = V[k];
					aux++;
				}
				palabra_vocal[aux] = ' ';
				aux++;
				cont++;
			}
			i++;
		}
	}
	palabra_vocal[aux] = '\0';
	cout << "\nSon " << cont << " palabras";
	cout << "\nLas palabras son: " << palabra_vocal;
}

int main() {

	char frase[100];
	int n;

	cout << "Escriba la frase: ";
	cin.get(frase, 100);

	n = strlen(frase);

	vocal_inicial(frase, n);

	return 0;
}
