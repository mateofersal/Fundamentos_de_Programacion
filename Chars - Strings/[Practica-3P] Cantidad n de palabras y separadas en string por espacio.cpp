//dada una cantidad n de palabras, colocarlas en un string separadas por un espacio e imprimis toda la frase

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

	for (int i = 0; i < n; i++) {

		cout << V[i] << " ";
	}

}

int main() {

	int n;
	string palabra[50];

	cout << "Digite la cantidad de palabras: "; cin >> n;

	lect_vect(palabra, n);

	imprimir_frase(palabra, n);

	return 0;
}
