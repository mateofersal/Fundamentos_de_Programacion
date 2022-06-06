//obtener la longitud de la frase y la cantiad de 'a' que tiene

#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void letra_a(char V[], int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == 'a') {

			cont++;
		}
	}
	cout << cont;
}


int main() {

	char A[50];
	int n;

	cout << "Escriba la oracion:"; cin.get(A, 50);

	n = strlen(A);

	cout << "\nLa longitud del texto es: " << n;

	cout << "\n\nLa cantidad de vocales a que tiene es: ";
	letra_a(A, n);

	return 0;
}
