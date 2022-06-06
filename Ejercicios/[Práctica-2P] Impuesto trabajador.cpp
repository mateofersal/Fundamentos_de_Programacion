// obtiene el rc-iva del pago de un trabajador e imprime salario e impuesto

#include<iostream>
using namespace std;


int main() {

	string nombre;
	int horas, h_trab;

	cout << "Escriba el nombre del trabajador: "; cin >> nombre;
	cout << "\nDigite las horas que ha trabajado en el mes: "; cin >> horas;
	cout << "\nDigite cuando es lo que cobra por hora trabajada (Bs): "; cin >> h_trab;
	cout << " \n";

	int salario = horas * h_trab;

	if (salario > 8272) {

		cout << nombre << ", su salario bruto es Bs. " << salario;
		cout << "\nSu salario neto es Bs. " << salario * 0.87;
		cout << "\nEl pago de su RC-IVA es Bs. " << salario * 0.13;
	}
	else {

		cout << nombre << ", su salario no paga RC-IVA y es: " << salario;
		cout << " \n";
	}
	cout << " \n";
	return 0;
}
