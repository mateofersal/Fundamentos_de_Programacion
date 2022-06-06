
									//arreglar el codigo para verificar que hora es mayor que la otra 
									//y asi proceder con la resta
#include<iostream>
using namespace std;

int main() {

	int hora1, hora2, min1, min2, seg1, seg2, comp_h1, comp_h2;

	cout << "Dadas dos horas en un mismo dia, obtenga su dieferencia\n";

	cout << "\nDigite la primera hora: ";
	cout << "\nHora: "; cin >> hora1; 
	cout << "Minutos: "; cin >> min1; 
	cout << "Segundos: "; cin >> seg1;

	cout << "\nDigite la segunda hora: ";
	cout << "\nHora: "; cin >> hora2; 
	cout << "Minutos: "; cin >> min2; 
	cout << "Segundos: "; cin >> seg2;

	int copia_h1 = hora1, copia_min1 = min1, copia_seg1 = seg1;

	comp_h1 = hora1*3600 + min1*60 + seg1;							//veririficar cual hora es mayor para ponerla como minuendo y la menor como sustraendo
	comp_h2 = hora2*3600 + min2*60 + seg2;							//conviertiendolo a segundos para saber cual es mayor

	if (comp_h1 < comp_h2) {

		hora1 = hora2; min1 = min2; seg1 = seg2;
		hora2 = copia_h1; min2 = copia_min1; seg2 = copia_seg1;		//intercambio de valores 
	}

	int hora_f = hora1 - hora2;
	int min_f = min1 - min2;
	int seg_f = seg1 - seg2; 

	if (seg_f < 0 && min_f == 0) {

		seg_f = seg_f + 60;
		hora_f = hora_f - 1;
		min_f = 0;
	}
	if (min_f < 0) {

		min_f = min_f + 60;
		hora_f = hora_f - 1;
	}
	if (seg_f < 0) {

		seg_f = seg_f + 60;
		min_f = min_f - 1;
	}
	cout << "\nLa diferencia de hora es de: " << hora_f << "h " << min_f << "' " << seg_f << "''" << endl;

	return 0;
}


/*int main() {
	
	int i = 1, n;
	float a, b;
	float t1,t2;

	cout << "De la siguiente ecuacion: at^2 + bt = 0";
	cout << "\nPrimero diga cuantas veces quiere hallar el valor de t: "; cin >> n;
	cout << "\nAsigne valores para a y para b";
	
	while (i <= n) {

		cout << "\nDigite a: "; cin >> a;
		cout << "Digite b: "; cin >> b;

		//por despeje de la ecuacion, t1 = 0 y t2 = -b/a

		t1 = 0;
		t2 = -b / a;

		cout << "\nt1 = " << t1<<"    "<< "t2 = " << t2;
		cout << "\n____________________________________" << endl;

		i += 1;
	}
	
	return 0;
}*/
