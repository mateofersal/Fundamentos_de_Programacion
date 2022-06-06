// obtiene la secuencia de fibonacci hasta valor n


#include<iostream>
using namespace std;


void fibo(int z) {

	int a = 0, b = 1, c = 1;

	for (int i = 1; i <= z; i++) {

		c = a + b;

		b = a;

		a = c;

		cout << c << " ";
	}
}

float fibo_suma(int z) {

	int a = 0, b = 1, c = 1, s = 0;

	for (int i = 1; i <= z; i++) {

		c = a + b;

		b = a;

		a = c;

		s = s + c;

		//cout << c << " ";
	}
	return s;
}

int main() {

	int n;

	cout << "[Importante] La serie va: {1,1,2,3,5,8,13,21...} \n\n";
	cout << "Digite un valor n para calcular la serie Fibonacci: "; cin >> n;

	cout << " \n";
	fibo(n);

	cout << "\nLa suma de los elementos hasta " << n << " es: " << fibo_suma(n);
	cout << " \n";

	return 0;
}
