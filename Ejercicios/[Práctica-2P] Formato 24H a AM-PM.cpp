// convierte un formato de 24 horas a AM/PM 


#include<iostream>
using namespace std;

int main() {

	int hora, min, seg;

	string resp = "si";

	while (resp == "si" || resp == "s") {

		cout << "\nDigite la hora: "; cin >> hora;
		cout << "\nDigite los miutos: "; cin >> min;
		cout << "\nDigite los segundos: "; cin >> seg;
		cout << " \n";

		if (hora < 12) {

			cout << hora << " " << min << " " << seg << " AM";
		}
		if (hora >= 12) {

			cout << hora - 12 << " " << min << " " << seg << " PM";
		}
		cout << "\n_______________________";
		cout << "\n\nSi desea cambiar de formato otra hora digite si/s: "; cin >> resp;

	}
	return 0;
}
