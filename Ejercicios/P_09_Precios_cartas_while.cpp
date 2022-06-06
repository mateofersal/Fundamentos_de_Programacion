#include<iostream>
using namespace std;

int main() {

	float peso;
	string r = "si";

	cout << "Introduzca el peso de la carta para calcular el costo de su envio\n";

	while (r == "si") {
		
		cout << "\nPeso: "; cin >> peso;

		if (peso > 0 && peso <= 50) {

			cout << "\n\nSu costo de envio es de: Bs. 1.50" << endl;
		}
		else if (peso > 50 && peso <= 100) {

			cout << "\n\nSu costo de envio es de: Bs. 4.00" << endl;
		}
		else if (peso > 100 && peso <= 200) {

			cout << "\n\nSu costo de envio es de: Bs. 6.00" << endl;
		}
		else if (peso > 200 && peso <= 350) {

			cout << "\n\nSu costo de envio es de: Bs. 10.50" << endl;
		}
		else if (peso > 350 && peso <= 500) {

			cout << "\n\nSu costo de envio es de: Bs. 15.00" << endl;
		}
		else{

			cout << "\n\nNO ES POSIBLE ENVIAR COMO CARTA.";
			cout << "\nPor favor, dirigirse a la oficina central " << endl;
		}
		cout << "____________________________________________\n";
		cout << "\nDesea calcular el costo de otra carta? "; cin >> r;

	}
	return 0;
}

								//Ahora con contador para el numero de cartas

/*int main() {

	float peso;
	int i=1, n;

	cout << "Introduzca el peso de la carta para calcular el costo de su envio\n";
	cout << "\nDigite el numero de cartas que desea enviar: "; cin >> n;
	
	while (i<=n) {

		cout << "\nPeso: "; cin >> peso;

		if (peso > 0 && peso <= 50) {

			cout << "\n\nSu costo de envio es de: Bs. 1.50" << endl;
		}
		else if (peso > 50 && peso <= 100) {

			cout << "\n\nSu costo de envio es de: Bs. 4.00" << endl;
		}
		else if (peso > 100 && peso <= 200) {

			cout << "\n\nSu costo de envio es de: Bs. 6.00" << endl;
		}
		else if (peso > 200 && peso <= 350) {

			cout << "\n\nSu costo de envio es de: Bs. 10.50" << endl;
		}
		else if (peso > 350 && peso <= 500) {

			cout << "\n\nSu costo de envio es de: Bs. 15.00" << endl;
		}
		else{

			cout << "\n\nNO ES POSIBLE ENVIAR COMO CARTA.";
			cout << "\nPor favor, dirigirse a la oficina central " << endl;
		}
		cout << "____________________________________________\n";
		i+=1;

	}
	return 0;
}
*/
