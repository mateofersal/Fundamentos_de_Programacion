#include<iostream>
using namespace std;

int main() {

	cout << "Calcule la solucion de un sistema de ecuaciones";
	cout << "\nAx + By = C";
	cout << "\nDx + Ey = F";

	float A, B, C, D, E, F;

	cout << " \n\n";

	cout << "Digite A: "; cin >> A; cout << "Digite B: "; cin >> B; cout << "Digite C: "; cin >> C;
	cout << "Digite D: "; cin >> D; cout << "Digite E: "; cin >> E; cout << "Digite F: "; cin >> F;

	float x = 0, y = 0;

	y = ((A * F) - (D * C)) / ((-B * D) + (A * E));

	x = (C - (B * y)) / A;

	cout << "\nEl valor de x es: " << x;
	cout << "\nEl valor de y es: " << y;

	return 0;
}
