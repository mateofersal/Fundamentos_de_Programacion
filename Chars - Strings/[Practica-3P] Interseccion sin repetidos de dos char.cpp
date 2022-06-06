//de dos listas de caracteres obtener los comunes (interseccion) y eliminar los repetidos
// usa cin.get y agarra frases con espacio


#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void show_vec(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i];
	}
}

int comunes(char V[], char X[], char C[], int n, int m) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {

			if (V[i] == X[k]) {

				C[size] = V[i];

				size++;
			}
		}
	}
	return size;
}

void eliminar_repetido(char V[], int n) {

	for (int i = 0; i < n; i++) {				//ciclo normal 

		for (int k = i + 1; k < n; k++) {		// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k]) {				// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) {		// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}
		}
	}
	cout << "\nInterseccion sin repetidos: ";
	show_vec(V, n);								//imprime el vector sin los elementos repetidos con el tamaño n reducido
}


int main() {

	int n, m, size;
	char A[50], B[50], C[50];

	cout << "Primeros caracteres: "; cin.get(A, 50);
	cin.ignore();

	cout << "\nSegundos caracteres: "; cin.get(B, 50);

	n = strlen(A);

	m = strlen(B);

	cout << "\nVector de los comunes (interseccion): ";
	size = comunes(A, B, C, n, m);			//se obtiene el tamano del vector de los comunes para trabajarlos en el main

	cout << "\nInterseccion con repetidos: "; show_vec(C, size);

	eliminar_repetido(C, size);

	return 0;
}




