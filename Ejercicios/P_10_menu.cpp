#include<iostream>
using namespace std;

int main() {

	float b, l, h, r, pi = 3.14159;
	char opcion = 'z';
	string n = "si";

	cout<<"(Construccion en if)\n\n";
	cout << "Bienvenido al menu para calcular areas de figuras.";
	cout << "\nSeleccione la figura para la cual desea obtener su area.\n";
	
	while (n == "si") {
		
		if(opcion !='e') {
		
			cout << "\na. Area de un cuadrado";
			cout << "\nb. Area de un rectangulo";
			cout << "\nc. Area de un triangulo";
			cout << "\nd. Area de un circulo";
			cout << "\ne. Salir";
			cout << "\n\nSeleccione la opcion que desea: "; cin >> opcion;
		}
		
		if (opcion == 'a') {

			cout << "\nDigite el lado: "; cin >> l;
			cout << "\nEl area del cuadrado es: " << l * l;
		}
		if (opcion == 'b') {

			cout << "\nDigite la base: "; cin >> b;
			cout << "\nDigite la altura: "; cin >> h;
			cout << "\nEl area del rectangulo es: " << b * h;
		}
		if (opcion == 'c') {

			cout << "\nDigite la base: "; cin >> b;
			cout << "\nDigite la altura: "; cin >> h;
			cout << "\nEl area del triangulo es: " << (b * h) / 2;
		}
		if (opcion == 'd') {

			cout << "\nDigite el radio: "; cin >> r;
			cout << "\nEl area del circulo es: " << pi * r * r;
		}
		if (opcion == 'e') {

			cout << "\n--- Programa finalizado con exito ---\n\n";
			return 0;
		}
		else{

			cout << "\n[Error] Opcion no valida";
			cout << "\nPor favor, digite una de las opciones del menu\n"; 
		}
		cout << "\n___________________________________________";
		cout << "\n\nDesea calcular otra area? (si/no): "; cin >> n;
	}
	return 0;
}

/*int main(){

	float b, l, h, r, pi = 3.14159;
	char opcion = 'z';
	string n = "si";

	cout << "(Construccion en Switch)\n\n";
	cout << "Bienvenido al menu para calcular areas de figuras.";
	cout << "\nSeleccione la figura para la cual desea obtener su area.\n";

	while (n == "si") {

		if(opcion !='e') {

			cout << "\na. Area de un cuadrado";
			cout << "\nb. Area de un rectangulo";
			cout << "\nc. Area de un triangulo";
			cout << "\nd. Area de un circulo";
			cout << "\ne. Salir";
			cout << "\n\nSeleccione la opcion que desea: "; cin >> opcion;
			}
		
		switch(opcion){

			case 'a':	cout << "\nDigite el lado: "; cin >> l;
						cout << "\nEl area del cuadrado es: " << l * l; break;
		
			case 'b':	cout << "\nDigite la base: "; cin >> b;
						cout << "\nDigite la altura: "; cin >> h;
						cout << "\nEl area del rectangulo es: " << b * h; break;
		
			case 'c':	cout << "\nDigite la base: "; cin >> b;
						cout << "\nDigite la altura: "; cin >> h;
						cout << "\nEl area del triangulo es: " << (b * h) / 2; break;
	
			
			case 'd':	cout << "\nDigite el radio: "; cin >> r;
						cout << "\nEl area del circulo es: " << pi * r * r; break;

			case 'e':	cout << "\n--- Programa finalizado con exito ---\n\n"; 
						return 0;

			default:	cout << "\n[Error] Opcion no valida ";
						cout << "\nPor favor ingrese una de las opciones del menu"; break;
		}
		cout << "\n_______________________________________________";
		cout << "\n\nDesea calcular otra area? (si/no): "; cin >> n;
	}
	if (n != "si") {

		cout << "\n--- Programa finalizado con exito ---\n\n";
	}
	return 0;
}
*/
