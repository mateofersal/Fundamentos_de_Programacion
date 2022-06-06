// serie seno   x¹/1!  - x³/3!  +  x^5/5! ... 

#include<iostream>
using namespace std;

int main() {

	float x;
	int n;

	cout << "Digite el valor x para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor n para el exponente: "; cin >> n;

	float p = x, f = 1, op = 0, s = 0, cont_fact = 1;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		s = s + (signo * (p / f));

		cout << f << " ";

		p = p * x * x;

		f = f * (cont_fact + 1) * (cont_fact + 2);

		cont_fact += 2;

		signo = signo * -1;


	}
	cout << " \n";
	cout << "\nLa sumatoria de la serie del seno es: " << s;
	cout << " \n";
	return 0;
}