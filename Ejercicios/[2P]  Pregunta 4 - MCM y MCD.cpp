// MCM y MCD 

#include<iostream>
using namespace std;

int menor(int x, int y) {

	if (x <= y) {

		return x;

	}
	else return y;
}

int main() {

	int a, b, aux;

	cout << "a: "; cin >> a;
	cout << "b:  "; cin >> b;

	for (int i = menor(a, b); i >= 1; i--) {

		if (a % i == 0 && b % i == 0) {

			aux = i;
			cout << "MCM: " << i << endl;
			cout << "MCD: " << a * (b / aux) << endl;		//el mcd puede ser obtenido una vez se cumple la condicion del mcm
			return 0;
		}
	}
	return 0;
}
