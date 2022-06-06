//	desglosar digito, obtener la suma de digitos y ver si cadad digito es primo


#include<iostream>
using namespace std;


int main() {

	long long n;
	int s = 0;
	string frase = "El digito es: ";

	cout << "\nDigite el valor del cual desea obtener sus digitos: "; cin >> n;

	int x = n;				// clon de n para mostrar el valor inicial
	int z = 0;				// variable para mostrar el valor inicial invertido 

	while (n > 0) {

		int d1 = n % 10;
		s = s + d1;			// 's' es la suma acumulada de los restos para la suma de los digitos 
		n = n / 10;			// 'n' es el valor inicial dividido en 10 para asi pasar a la cifra sgte.

		z = z * 10 + d1;	// z = 0, entonces z*1=0 y sumandole d1 (el resto de la division) queda 
							// el primer valor para colocar el valor original invertido

		if (d1 == 2 || d1 == 3 || d1 == 5 || d1 == 7) {

			cout << "\nEl digito: " << d1 << " es primo";
		}

	}
	cout << "\nLa suma de los digitos es: " << s << endl;

	return 0;
}
