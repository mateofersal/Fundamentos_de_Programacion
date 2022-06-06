
// ejercicio 1 - elaborar un programa que convierta a mayuscula los caracteres introducidos

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void mayusculas(char frase[], int n) {

	for (int i = 0; i < n; i++) {

		frase[i] = toupper(frase[i]);
	}
}

void show_vec(char frase[], int n) {
	
	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}

int main() {

	char frase[100];
	int n;

	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	mayusculas(frase, n);
	show_vec(frase, n);
}
*/

	// ejercicio 2 - elaborar un programa que determine cuantas palabras tiene un texto

	/*
	#include<iostream>
	#include<string.h>
	#include<string>
	#include"string.h"
	using namespace std;

	int palabras(char frase[], int n) {

		int cont= 0;

		for (int i = 0; i < n; i++) {

			if (frase[i] == ' ') {

				cont++;
			}
		}
		return cont+1;
	}

	int main() {

		int n;
		char frase[100];

		cout << "Frase:"; cin.get(frase, 100);
		n = strlen(frase);

		cout << "El numero de palabras es: " << palabras(frase, n);

		return 0;
	}
	*/

// ejercicio 3 - elaborar un programa que convierta a mayuscula el primer caracter de cada palabra 

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void primera_mayus(char frase[], int n) {

	frase[0] = toupper(frase[0]);

	for (int i = 1; i < n; i++) {

		if (frase[i] == ' ') {

			frase[i + 1] = toupper(frase[i + 1]);
		}
	}
}

void show_vec(char frase[], int n) {

	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}

int main() {

	int n;
	char frase[100];
	
	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	primera_mayus(frase, n);
	show_vec(frase, n);

	return 0;
}
*/

// ejercicio 4 - elaborar un programa que invierta una cadena de caracteres (solo palabra) (y para frases) determine si son capicuas

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void invertir(char frase[], int n) {

	char aux;
	int m = n - 1;

	for (int i = 0; i < n / 2; i++, m--) {

		aux = frase[i];
		frase[i] = frase[m];
		frase[m] = aux;
	}
}

void show_vec(char frase[], int n) {

	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}

void copy(char frase[], char frase2[], int n) {

	for (int i = 0; i < n; i++) {

		frase2[i] = frase[i];
	}
}

void capicua(char frase[],char frase2[], int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != frase2[i]) {

			cont++;
		}
	}
	if (cont > 0) {

		cout << "\nLa frase  no es capicua";
	}
	else {
		
		cout << "\nLa frase es capicua";
	}
}

int main() {

	char frase[100], frase2[100];
	int n;

	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	copy(frase, frase2, n);
	invertir(frase, n);
	
	cout << "Frase invertida: ";
	show_vec(frase, n);

	capicua(frase, frase2, n);

	return 0;
}
*/

// ejercicio 5 - elaborar un programa que lea dos cadenas (palabrsa o frases) y realice la mezcla de estas en otra cadena (concatenar)

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void concatenar(char frase1[], char frase2[], char frase3[], int n, int m) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		frase3[i] = frase1[i];
	}
	for (int i = n; i < n + m; i++) {

		frase3[i] = frase2[aux];
		aux++;
	}
}

void show_vec(char frase3[], int size) {

	for (int i = 0; i < size; i++) {

		cout << frase3[i];
	}
}

int main() {

	int n, m;
	char frase1[100], frase2[100], frase3[100];

	cout << "Frase 1:"; cin.get(frase1, 100);
	n = strlen(frase1);
	cin.ignore();

	cout << "Frase 2:"; cin.get(frase2, 100);
	m = strlen(frase2);

	concatenar(frase1, frase2, frase3, n, m);

	show_vec(frase3, m + n);

	return 0;
}
*/

// ejercicio 6 - elaborar un programa que elimine todas las vocales de una frase

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void elimina_vocales(char frase[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {

				for (int k = i; k < n; k++) {

						frase[k] = frase[k + 1];
				}
				size--;
		}
	}
	for (int j = 0; j < size; j++) {

		if (frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') {

			for (int l = j; l < size; l++) {

				frase[l] = frase[l + 1];
			}
			size--;
		}
	}
	for (int i = 0; i < size; i++) {			//impresion normal del vector sin vocales

		cout << frase[i];
	}
}

int main(){

	char frase[100];
	int n;

	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	elimina_vocales(frase, n);

	return 0;
}
*/

// ejercicio 7 - elaborar un programa que lea n caracteres y los coloque en orden alfabetico

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

void ordenar(char frase[], int n) {

	char aux;

	for (int k = 0; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (frase[i] > frase[i + 1]) {

				aux = frase[i];
				frase[i] = frase[i + 1];
				frase[i+1] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++){

		cout << frase[i];
	}
}

int main() {

	char frase[100];
	int n;

	cout << "Frase:"; cin.get(frase,100);
	n = strlen(frase);

	ordenar(frase, n);

	return 0;
}
*/

// ejercicio 8 - elaborar un programa que pida n palabras y las ordene en un string separado por espacio

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

int main() {

	int n;
	string palabras[20];
	cout << "Cantidad de palabras: "; cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> palabras[i];
	}
	for (int i = 0; i < n; i++) {

		cout << palabras[i] << " ";
	}
	return 0;
}
*/

// ejercicio 9 - dados dos conjuntos de caracteres hacer la interseccion de estos conjuntos (concatenar y eliminar repetidos)

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;

int comunes(char frase1[], char frase2[], char frase3[], int n, int m) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {

			if (frase1[i] == frase2[k]) {

				frase3[aux] = frase1[i];
				aux++;
			}
		}
	}
	return aux;
}

void show_vec(char frase3[], int size) {

	for (int i = 0; i < size; i++) {

		cout << frase3[i];
	}
}

int eliminar_repetidos(char frase3[], int size) {

	char aux;

	for (int i = 0; i < size; i++) {

		for (int k = i + 1; i < size; k++) {

			while (frase3[i] == frase3[k]) {

				for (int j = i; j < size; j++){

					frase3[j] = frase3[j + 1];
				}
			}
			size--;
		}
	}
	return size;
}

int main() {

	int n, m;
	char frase1[20], frase2[20], frase3[40];
	
	cout << "Frase 1: "; cin.get(frase1, 20);
	cin.ignore();
	cout << "\nFrase 2:"; cin.get(frase2, 20);

	n = strlen(frase1);
	m = strlen(frase2);

	int size = comunes(frase1, frase2, frase3, n, m);

	show_vec(frase3, size);
	
	int new_size = eliminar_repetidos(frase3, size);
	
	cout << "\nInterseccion de elementos: ";
	show_vec(frase3, new_size);

	return 0;
}
*/

// ejercicio 10 - dada una cadena introducida mostrar la cantidad de veces que existen dos vocales juntas 

/*
#include<iostream>
#include<string.h>
#include<string>
#include"string.h"
using namespace std;


void vocales_seguidas(char V[], int n) {

	string palabra_vocal[10];
	int aux = 0;
	int cont = 0;

	for (int i = 0; i < n; i++) {

			if (V[i] == 'a' || V[i] == 'e' || V[i] == 'i' || V[i] == 'o' || V[i] == 'u') {

				if (V[i + 1] == 'a' || V[i + 1] == 'e' || V[i + 1] == 'i' || V[i + 1] == 'o' || V[i + 1] == 'u') {

					for (int k = i; k < i + 2; k++) {

						palabra_vocal[aux] = palabra_vocal[aux] + V[k];
					}
					aux++;
					cont++;
				}
			}
	}
	palabra_vocal[aux] = '\0';
	cout << "\nLa cantidad de dos vocales seguidad es: " << cont;
	cout << "\nLas vocales son: ";

	for (int i = 0; i < aux; i++) {

		cout << palabra_vocal[i]<<" ";
	}
}

int main() {

	char frase[100];
	int n;

	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	vocales_seguidas(frase, n);
	return 0;
}
*/

