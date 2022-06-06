// digitar tres notas de parciales, nota practica, proyecto final y nota final de materia en semestre

#include<iostream>
using namespace std;


int main() {

	float par1, par2, par3, prom_par, ex_fin, pro_fin;

	cout << "Digite las notas de los parciales de el/la estudiante: \n";
	cout << "\nParcial 1: "; cin >> par1;
	cout << "\nParcial 2: "; cin >> par2;
	cout << "\nParcial 3: "; cin >> par3;

	prom_par = (par1 + par2 + par3) / 3 * 0.4;

	cout << "\n ** El valor de los parciales es: " << prom_par;

	cout << "\n\nDigite la nota del examen final: "; cin >> ex_fin;

	cout << "\n ** El valor del examen final es: " << ex_fin * 0.4;

	cout << "\n\nDigite la nota del proyecto final: "; cin >> pro_fin;

	cout << "\n ** El valor del proyecto final es: " << pro_fin * 0.2;

	float nota_fin = prom_par + (ex_fin * 0.4) + (pro_fin * 0.2);

	cout << "\n\n[La nota final de la materia en este semestres es: " << nota_fin << "] " << endl;

	return 0;
}
