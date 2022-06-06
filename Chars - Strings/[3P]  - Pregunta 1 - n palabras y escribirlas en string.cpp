//pregunta 1

/*
Pregunta Nro.: 1
Author: Mateo Fernandez Salvatierra
Fecha: 23-Nov-2021
Enunciado del problema: Elaborar un programa que pida n palabras por teclado y los coloque en una string separada por un espacio.

Entrada:
No
busques
personas
con
tus
mismos
gustos
busca
personas
con
tus
mismos
valores
Salida: No busques personas con tus mismos gustos, busca personas con tus mismos valores.
*/

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

void imprimir_frase(string V[], int n) {

	string texto = " ";

	for (int i = 0; i < n; i++) {

		texto = texto + V[i] + " ";
	}
	cout << texto;
}

int main() {

	int n;
	string palabra[50];

	cout << "Digite la cantidad de palabras: "; cin >> n;

	lect_vect(palabra, n);

	cout << "\nLa frase es: ";
	imprimir_frase(palabra, n);

	return 0;
}
