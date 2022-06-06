// de una serie de chars de nombres separado por coma, obtener en string los nombres sin comas


#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int elimina_comas(char texto[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (texto[i] == ',') {

			for (int k = i; k < n; k++) {

				texto[k] = texto[k + 1];
			}
			size--;
		}
	}
	return size;
}

int separar(char texto[], string nombres[], int n) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		if (texto[i] != ' ') {

			nombres[size] = nombres[size] + texto[i];
		}
		else {
			size++;
		}
	}
	return size + 1;			// como despues del nombre final no hay espacio y no aumenta el tamaño del string, aumentamos en 1 para que devuelva el tamaño correcto del string
}

void show_vec(string texto[], int n) {

	for (int i = 0; i < n; i++) {

		cout << texto[i] << "\n";
	}
}

int main() {

	int n;
	char texto[1000];
	string nombres[10];

	cout << "Digite los nombres:"; cin.get(texto, 1000);
	n = strlen(texto);

	int a = elimina_comas(texto, n);
	int b = separar(texto, nombres, a);
	show_vec(nombres, b);

	return 0;
}

