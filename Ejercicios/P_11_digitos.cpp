#include<iostream>
using namespace std;

int main() {

	int n, s = 0;
	int msg = 1;
	int contador = 0;
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
		
		if (msg == 1) {

			cout << "\nEl orden de cifra menos significativa a mas significativa es:\n\n";
			msg = msg + 1;
		}
		if (d1 % 2 == 0) {

			cout << d1 << "--> es par" << endl;			//verificar si el digito obtenido del resto es par
		}
		if (d1 % 2 != 0) {

			cout << d1 << "--> es impar" << endl;		// verificar si el digito obtenido del resto es impar
		}
		contador += 1;
	}
	cout << "\nLa suma de los digitos es: " << s << endl;

	cout << "\nEl valor original es: " << x << endl;

	cout << "\nEl valor invertido es: " << z << endl;

	cout << "\nEl total de digitos es: " << contador << " \n";

	if (x == z) {

		cout << "\nLos valores son capicuas";
	}
	else {

		cout << "\nNo son capicuas";
	}
	cout << " \n";

	return 0;
}

