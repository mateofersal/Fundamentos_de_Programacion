#include<iostream>
using namespace std;

/*
void saludo() {

	cout << "\n---------------------";
	cout << "\n     Hola Mundo      ";
	cout << "\n---------------------";
}
int main() {

	int n, i = 1;

	cout << "Digite cuantas veces desesa obtener el saludo: "; cin >> n;
	
	while (i <= n) {

		saludo();
		i++;
	}
	cout << " \n";
	return 0;
}
*/

																//subprograma del factorial con series

/*int fact(int n) {

	int i, p=1;

	for (i = 1; i <= n; i++) {

		p = p * i;
	}
	return p;
}

int main() {

	int n, k;

	cout << "Digite el numero del primer factorial: "; cin >> n;
	cout << "Digite el segundo numero: "; cin >> k;

	cout << "\n";
	cout << fact(n) / (fact(k) * fact(n - k));
	cout << "\n";

	return 0;
}*/

																//serie de covid MENU con subprogramas

/*int infec(int n) {

	int k = 1;												//subprograma para el crecimiento de infectados
	
	cout << "1 ";
		
	for (int i = 1; i <= n; i++) {

		k = k * 2;

		cout << k << " ";
	}
	return k;
}

int dia(int n) {											// subprograma para saber la cantidad de infectados
															// para cambiar el crecimiento por dia, se debe modificar el i++
	int r = 1;

	for (int i = 1; i <= n+1; i++) {

		r = r * 2;
	}
	return r;
}

int main() {

	int n;

	cout << "Digite el dia para saber el numero de infectados: "; cin >> n;

	cout << " \n";
	cout << "La razon de crecimiento de infectados es: ";
	cout << infec(n);
	cout << " \n";

	cout << "\nEl numero total de contagiados hasta el dia " << n << " es: " <<dia(n) - 1;
	cout << " \n";
	
	return 0;
}*/

/*int main() {

	int n;

	cout << "Dia n para saber el nro. de contagiados: "; cin >> n;

	int b = 2;

	int s = 1, a = 1;
	

	for (int i = 1; i <= n; i++) {

		a = a * b;

		cout << s << " ";
		
		s = s + a;
	}
	cout << "\n\nEl numero total de contagiados al dia "<<n<<" es:  " << s << endl;

	return 0;
}
*/

/*int poten(int a, int b) {				[potencia x^n con subprograma]
	
	int p = 1;									// en los subprogramas se pueden usar las mismas variables o diferentes
												// porque es un espacio diferente de el main()
	for (int i = 1; i <= b; i++) {

		p = p * a;
	}
	return p;
}

int main() {

	int x, n;

	cout << "Digite el valor de la base: "; cin >> x;
	cout << "\nDigite el valor de la potencia a la cual llegar: "; cin >> n;

	cout << "\n";
	cout << "El resultado es: " << poten(x, n) << "\n";
	cout << poten(x, 3) + poten(x, 2) << "\n";
	cout << poten(poten(poten(2, n), n), n) << endl;

	return 0;
}*/

/*float serie(int a, int b) {		[serie de x^n/n! con subprograma]

	float p = 1, f = 1;
	float s = 0;
												
	for (int i = 1; i <= b; i++) {

		p = p * a;
		f = f * i;

		s = s + (p / f);
	}
	return s;
}

int main() {

	float x;
	float n;

	cout << "Digite el valor x para la base: "; cin >> x;
	cout << "\nDigite el valor n para las potencias: "; cin >> n;

	cout << "\nEl resultado de la serie es: " << serie(x, n) << endl;

	return 0;
}*/

//hacer un menu basado en la serie Fibonacci

/*void menu() {

	cout << "======================= Menu =========================\n";
	cout << "\n1. Serie de reproduccion (Fiboncci) para n dias";
	cout << "\n2. Promedio diario de reproduccion";
	cout << "\n3. Total de conejos en n dias";
	cout << "\n4. Comida necesaria para los conejos en 1 dia";
	cout << "\n5. Fin del menu";

}

void fibo(int z, int w) {						// para añadir un parametro más sobre la reproducción cada 'k' dias, debemos aumentar una variable en el subprograma
												// además,cuando i aumente deberá ser 'i+=k' porque asi se da la reproduccion cada 'k' dias
	int a = 0, b = 1, c = 0;					// para que la serie comience en 0 primero imprimo 'a' que vale 0 y comienzo el 'i' en 2;
												// para que la serie comience en 1,1,2,3... NO IMPRIMIR 'a' y comenzar el i en 'i' en 1;
	for (int i = 1; i <= z; i+=w) {

		cout << c << " ";

		c = a + b;

		b = a;

		a = c;

	}
}

float fibo_suma(int z, int w) {				
										 
	int a = 0, b = 1, c = 0, s = 0;

	for (int i = 1; i <= z; i+=w) {

		cout << c << " ";

		s = s + c;

		c = a + b;

		b = a;

		a = c;
	}
	return s;
}


float comida(int z) {

	int a = 0, b = 1, c = 0, s = 0;
	float food = 0;

	for (int i = 1; i <= z; i ++) {

		c = a + b;

		b = a;

		a = c;

		s = s + c;

		food = s * 0.5;
	}
	return food;
}


int main() {

	int n,k,dias, opcion = 0;

	while (opcion != -1) {

		menu(); 
		cout << "\n\nOpcion: "; cin >> opcion;

		switch (opcion) {

		case 1: cout << "\nDigite el valor n para los dias de la serie: "; cin >> n;	
				cout << "\nDigite el valor k para los dias en que se da la reproduccion: "; cin >> k;
				fibo(n,k);
				cout << " \n\n";
				break;
		
		case 2: cout << "\nDigite el valor n (dias) para el promedio de reproduccion: "; cin >> n;
				cout << "\nDigite el valor k para los dias en que se da la reproduccion: "; cin >> k;
				cout << "\nEl promedio de la serie en el dia "<<n<<" es: "<<fibo_suma(n,k) / n;
				cout << " \n\n";
				break;
				

		case 3: cout << "\nDigite n para la suma de los valores de la serie: "; cin >> n;
				cout << "\nDigite el valor k para los dias en que se da la reproduccion: "; cin >> k;
				cout << "\nLa suma de valores hasta el dia "<<n<<" son: "<<fibo_suma(n,k);
				cout << "\n\n";
				break;

		case 4: cout << "\nDigite el valor n para la serie de reproduccion: "; cin >> n;
				cout << "\nLa suma de los conejos es: " << fibo_suma(n, 1);
				cout << "\nLa comida que consumiran todos los conejos en un dia es: " << comida(n) << " kg (0.5kg c/conejo)";
				cout << "\nCuantos dias quisiera alimentarlos? "; cin >> dias;
				cout << "\nLa comida que necesitara para alimentarlos durante " << dias << " dias es " << comida(n) * dias << " kg";
				cout << "\n\n";
				break;
		
		case 5: return 0;
		}
	}
	return 0;
}*/

