// texto en formato string y determine longitud, espacios, palabras y vocales

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int contar(string texto, int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (texto[i] == ' ') {

			cont++;
		}
	}
	return cont;
}

int contar_vocales(string texto, int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') {

			cont++;
		}
	}
	return cont;
}


int main() {

	int n;
	string texto;

	cout << "Frase: ";
	getline(cin, texto);                // se usa getline cuando tenemos strings y queremos que cuente todas los caracteres							
	n = texto.size();					// y no solo cuando haya un enter

	cout << "\nEl tamaño del texto es de: " << n << " caracteres";
	cout << "\nLa cantidad de espacios es: " << contar(texto, n);
	cout << "\nLa cantidad de palabras es: " << contar(texto, n) + 1;
	cout << "\nLa cantidad de vocales es: " << contar_vocales(texto, n);

	return 0;
}
