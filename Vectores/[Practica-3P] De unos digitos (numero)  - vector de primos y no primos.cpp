//de una cantidad n, obtener cuales son digitos primos y crear un vector con los primos y otro con los no primos

#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "  ";
	}
}


int main() {

	int num;
	int primo[50], noprimo[50];

	cout << "Digite el numero: "; cin >> num;

	int cont = 0;
	int cont2 = 0;

	while (num > 0) {

		int resto = num % 10;

		num = num / 10;

		if (resto == 2 || resto == 3 || resto == 5 || resto == 7) {

			primo[cont] = resto;

			cont++;
		}
		else {

			noprimo[cont2] = resto;

			cont2++;
		}
	}
	cout << "\nEl vector de los primos: ";
	show_vec(primo, cont);
	cout << "\nEl vector de los no primos: ";
	show_vec(noprimo, cont2);

	return 0;
}
