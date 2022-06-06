// obtiene factorial

#include<iostream>
using namespace std;


int factorial(int n) {

	int p = 1;

	for (int i = 1; i <= n; i++) {

		p = p * i;

	}
	return p;
}

int main() {

	int n;

	cout << "Digite un valor para hallar el factorial: "; cin >> n;

	cout << " \n";
	cout << factorial(n);
	cout << " \n";
	return 0;
}
