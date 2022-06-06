//Serie  x¹/1! - X²/2! + X³/3!

#include<iostream>
using namespace std;


int main() {

	float x;
	int n;

	cout << "Digite el valor para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor para el n para el factorial y los exponentes: "; cin >> n;

	float p = 1, s = 0, f = 1;
	float op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + (signo * op);

		signo = signo * -1;

		cout << op << " ";
	}
	cout << " \n";
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";
	return 0;
}

