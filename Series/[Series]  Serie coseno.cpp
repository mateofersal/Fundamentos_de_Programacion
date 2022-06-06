// serie coseno   x²/2!  - x^4/4!  +  x^6/6! ... 

#include<iostream>
using namespace std;


int main() {

	float x;
	int n;

	cout << "Digite el valor x para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor n para el exponente: "; cin >> n;

	float p = (x * x), f = 2, s = 1, cont_fact = 2;
	int signo = -1;

	for (int i = 2; i <= n; i += 2) {

		s = s + (signo * (p / f));

		cout << f << " ";

		p = p * x * x;

		f = f * (cont_fact + 1) * (cont_fact + 2);

		cont_fact += 2;

		signo = signo * -1;


	}
	cout << " \n";
	cout << "\nLa sumatoria de la serie del coseno es: " << s;
	cout << " \n";

	return 0;
}
