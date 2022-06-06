// menu covid que muestra la secuencia de infectados en n dias y total de contagiados caDA 2.5 dias

#include<iostream>
using namespace std;

void menu() {

	cout << "-------MENU COVID----------";
	cout << "\na. Secuencia de contagiados hasta dia n";
	cout << "\nb. Total de contagiados hasta dia n ";
	cout << "\nc. Fin del menu";

}
int infec(float n) {

	int k = 1;												//subprograma para el crecimiento de infectados (solo valor)\

	for (float i = 0; i <= n; i += 2.5) {

		cout << k << " ";

		k = k * 2;
	}
	return k;
}

int dia(float n) {
	// para cambiar el crecimiento por dia, se debe modificar el i++ (suma de valores)
	int r = 1;

	for (float i = 0; i <= n; i += 2.5) {

		r = r * 2;

	}
	return r - 1;
}

int main() {

	float n;
	char opcion = 'z';

	while (opcion != 'c') {

		menu();
		cout << "\n\nOpcion: "; cin >> opcion;

		switch (opcion) {

		case 'a': cout << "Digite el dia n para la secuencia de contagiados: "; cin >> n;
			cout << "La secuencia de infectados es: "; infec(n);
			cout << "\n\n";
			break;

		case 'b': cout << "Digite el valor n para el total de infectados en n dias: "; cin >> n;
			cout << "El total de infectados en ese dia es: " << dia(n);
			cout << "\n\n";
			break;

		case 'c': return 0;

		}

	}
	return 0;
}

