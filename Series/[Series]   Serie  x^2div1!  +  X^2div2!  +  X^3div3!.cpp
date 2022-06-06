// Serie x/1! + X²/2! + X³/3! ...

#include<iostream>
using namespace std;

int main() {

	float x;
	int n;

	cout << "Digite el valor para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor para el factorial y la potencia a la que desea llegar: "; cin >> n;

	float p = 1, s = 0, f = 1;
	float op = 0;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + op;

		cout << p << " ";
	}
	cout << "\nLa sumatoria es: " << s;

	return 0;
}

