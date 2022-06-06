#include<iostream>
using namespace std;

int main() {

	int lim_inf, lim_sup;
	int dig, valor;

	cout << "Digite el valor del limite inferior: "; cin >> lim_inf;
	cout << "Digite el valor del limite superior: "; cin >> lim_sup;

	if (lim_inf > lim_sup) {

		cout << "Digite  nuevamente" << endl;
		cout << "Digite el valor del limite inferior: "; cin >> lim_inf; cout << endl;
		cout << "Digite el valor del limite superior: "; cin >> lim_sup; cout << endl;
	}
	cout << "Valor a analizar: "; cin >> dig;

	int cont_fuera = 0;
	int cont_igual = 0;
	int suma_dig = 0;

	while (dig != 0) {

		if (dig > lim_inf && dig < lim_sup) {

			suma_dig = suma_dig + dig;
		}
		if (dig < lim_inf && dig > lim_sup) {

			cont_fuera = cont_fuera + 1;
		}
		if (dig == lim_inf || dig == lim_sup) {

			cont_igual = cont_igual + 1;
		}

		cout << "Valor a analizar: "; cin >> dig;
	}
	cout << endl;
	cout << "Suma de digito: " << suma_dig << endl << endl;

	cout << "Numeros fuera de rango: " << cont_fuera << endl << endl;

	cout << "Numeros igual a los limites: " << cont_igual << endl << endl;

	return 0;
}
