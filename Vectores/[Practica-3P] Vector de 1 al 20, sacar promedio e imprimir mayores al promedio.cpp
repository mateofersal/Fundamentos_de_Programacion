//vector que sea de numeros del 1 al 20, obtenga el promedio e imprime los primos de ese vector mayores al promedio de forma descendente

#include<iostream>
#include<string.h>
#include<string>
using namespace std;
float promedio(int V[], int n) {

	float s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s / n;
}

void ordenar_may_men(int V[], int n) {						//ordena un vector de mayor a menor		

	int aux;

	for (int k = 1; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] < V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

int vec_primos(int V[], int B[], int n) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == 2 || V[i] == 3 || V[i] == 5 || V[i] == 7 || V[i] == 11 || V[i] == 13 || V[i] == 17 || V[i] == 19) {

			B[aux] = V[i];
			aux++;
		}
	}
	return aux;
}

int primos_mayores(int B[], int C[], int n, float prom) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (B[i] > prom) {

			C[aux] = B[i];
			aux++;
		}
	}
	return aux;
}

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano del vector:"; cin >> n;
	cout << "\nVector del 1 al 20 \n";
	lect_vect(A, n);

	float prom = promedio(A, n);
	cout << "\nEl promedio del vector es: " << prom;

	int size1 = vec_primos(A, B, n);

	int size2 = primos_mayores(B, C, n, prom);

	cout << "\nVector de los primos: ";
	show_vec(B, size1);

	cout << "\nVector primos mayores al promedio: ";
	ordenar_may_men(C, size2);
	show_vec(C, size2);

	return 0;
}
