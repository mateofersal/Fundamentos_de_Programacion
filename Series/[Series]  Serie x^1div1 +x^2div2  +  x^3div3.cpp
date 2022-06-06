// serie x¹/1 + x²/2 + x¹/3...

#include<iostream>
using namespace std;

int main() {

	float n, x;

	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite la potencia hasta la que desea llegar: "; cin >> n;

	float s = 0, p = 1;
	float op = 0;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		op = p / i;

		s = s + op;

		cout << p << " ";
		cout << i << " ";
	}
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";

	return 0;
}

