// convierte de segundos a horas, min y seg

#include<iostream>
using namespace std;


int main() {


	int hora, min, seg, total;
	string resp = "si";

	while (resp == "si" || resp == "s") {

		cout << "\nDigite la cantidad de segundos para calcular su hora: "; cin >> total;

		hora = total / 3600;
		min = (total % 3600) / 60;
		seg = total - hora * 3600 - min * 60;

		cout << "\nLa hora es: " << hora << "h " << min << "' " << seg << "''";
		cout << "\n____________________________________";

		cout << "\n\nSi desea calcular otra hora, digite si/s: "; cin >> resp;
	}

	return 0;
}
