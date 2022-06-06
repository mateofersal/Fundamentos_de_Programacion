// dado el dia y un mes ver en que estacion esta

#include<iostream>
using namespace std;

int main() {

	int dia, mes;

	cout << "Digite una fecha para determinar la estacion";
	cout << "\n\nDia: "; cin >> dia;
	cout << "\nMes: "; cin >> mes;

	if (dia >= 1 && dia <= 20 && mes == 3) {

		cout << "\nEsa fecha es en verano";			// 1 - 20 de marzo verano
	}
	if (dia >= 21 && dia <= 31 && mes == 3) {

		cout << "\nEsa fecha es en otoño";			// 21 - 31 de marzo otoño
	}
	if (dia >= 1 && dia <= 31 && mes == 4 || mes == 5) {

		cout << "\nEsa fecha es en otoño";			// 1 - 31 de abril/mayo otoño
	}
	if (dia >= 1 && dia <= 20 && mes == 6) {

		cout << "\nEsa fecha es en otoño";			// 1 - 20 junio otoño
	}
	if (dia >= 21 && dia <= 31 && mes == 6) {

		cout << "\nEsa fecha es en invierno";		// 21 - 30 junio invierno
	}
	if (dia >= 1 && dia <= 31 && mes == 7 || mes == 8) {

		cout << "\nEsa fecha es en invierno";		// 1 - 31 julio/agosto invierno
	}
	if (dia >= 1 && dia <= 20 && mes == 9) {

		cout << "\nEsa fecha es en invierno";		// 1 - 20 de septiembre invierno
	}
	if (dia >= 21 && dia <= 31 && mes == 9) {

		cout << "\nEsa fecha es en primavera";		// 21 - 31 septiembre primavera
	}
	if (dia >= 1 && dia <= 31 && mes == 10 || mes == 11) {

		cout << "\nEsa fecha es en primavera";		// 1 - 31 octubre/noviembre primavera
	}
	if (dia >= 1 && dia <= 20 && mes == 12) {

		cout << "\nEsa fecha es en primavera";		// 1 - 20 de diciembre primavera
	}
	if (dia >= 21 && dia <= 31 && mes == 12) {

		cout << "\nEsa fecha es en verano";			// 21 - 31 diciembre verano
	}
	if (dia >= 1 && dia <= 31 && mes == 1 || mes == 2) {

		cout << "\nEsa fecha es en verano";		// 1 - 31 enero/febrero verano
	}
	cout << " \n";
	return 0;
}
