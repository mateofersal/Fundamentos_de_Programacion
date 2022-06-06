												
										// hacer una sumatoria de 1^2 + 2^2 + 3^2 + 4^2... + n^2
										//_______________________________________________________
#include<iostream>						
using namespace std;					

int main() {
	
	int n, a, c, s=0;

	cout << "Digite el valor de n para la sumatoria de cuadrados: "; cin >> n;

	for (int i = 1; i <= n; i++) {

		 a = i * i;
		 c = a;
		 s = s + c;

	}
	cout << "\nLa suma de los cuadrados es: " << s << endl;

	return 0;
}

								
										//sumatoria de enteros con signos intercalados
										//____________________________________________

/*int main() {

	int n, s = 0, a, b, i;

	cout << "Digite el valor de n para la sumatoria de enteros: "; cin >> n;

	for (i = 1; i <= n; i++) {

		if (i % 2 == 0) {

			s = s - i;
		}
		if (i % 2 != 0) {

			s = s + i;
		}
	}
	cout << "El resultado de la sumatoria es: " << s << endl;
	
	return 0;
}
*/


												//sumatoria de x^n 
												//__________________

/*int main() {

	float x;
	int n;

	cout << "Digite el valor [x] para la base (Numero real): "; cin >> x;
	cout << "\nDigite el valor [n] para las potencias (Numero entero): "; cin >> n;
	
	float s = 0, a = 1;

	for (int i = 1; i <= n; i++) {

		a = a * x;
		s = s + a;
	}
	cout << "\nEl valor de la sumatoria es: " << s << endl;
	
	return 0;
}*/


												//sumatoria de x/1! - x^2/2! + x^3/3! - x^4/4! ...
												//_____________________________________________

/*int main() {

	float x, s = 0;
	int n;

	cout << "Digite el valor de x para la sumatoria: "; cin >> x;
	cout << "\nDigite el valor de n para los factoriales: "; cin >> n;

	float p = 1, f=1, op=0; 
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;				//potencias (dividendo)

		f = f * i;				//factoriales (divisor)

		op = p / f;				// operacion de division
		
		/*if (i % 2 != 0) {

			s = s + op;			// si es potencia impar va con (+)
		}
		if (i % 2 == 0) {

			s = s - op;			//si es potencia par va con (-)
		}

		s = s + signo * op;		// para empezar en (1)*op --> (-1)*op...

		signo = signo*-1;

		cout << "\n" << p << " " << f;
	}
	cout << "\n\nEl valor de la sumatoria es: " << s;
	return 0;
}*/

												//sumatoria del seno x^1/1! - x^3/3! + x^5/5! ...
												//_______________________________________________

/*int main() {

	float x, n;

	cout << "Digite el valor de x para la sumatoria: "; cin >> x;
	cout << "\nDigite el valor de n para las potencias: "; cin >> n;

	float s = 0, p = 1, f = 1, op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;
		
		f = f * i;

		op = p / f;

		s = s + signo * op;
		
		p = p * x;

		f = f * (i + 1);
		
	}
	cout << "\nEl valor de la sumatoria es: " << s;
	return 0;
}*/



														//ejercicio en clase 1  [funciona correctamente]

/*int main() {

	float x, s = 0;
	int n;

	cout << "Digite el valor de x para la sumatoria: "; cin >> x;
	cout << "\nDigite el valor de n para los factoriales: "; cin >> n;

	float p = 1, f = 1, op = 0;

	for (int i = 2; i <= n+1; i++) {

		p = p * x;				//potencias (dividendo)

		f = f * i;				//factoriales (divisor)

		op = p / f;				// operacion de division

		cout << "\n" << p << " " << f;

		s = s + op;
	}
	cout << "\n\nEl valor de la sumatoria es: " << s << endl;
	return 0;
}*/



														//segundo ejercicio (signos intercalados) [funciona correctanente]


/*int main() {
	
	float x, s = 0;
	int n;

	cout << "Digite el valor de x para la sumatoria: "; cin >> x;
	cout << "\nDigite el valor de n para los factoriales: "; cin >> n;

	float p = 1, f = 1, op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;				//potencias (dividendo)

		f = f * i;				//factoriales (divisor)

		op = p / f;				// operacion de division

		s = s + signo * op;		// para empezar en (1)*op --> (-1)*op...

		signo = signo*-1;

		cout << "\n" << p << " " << f;
	}
	cout << "\n\nEl valor de la sumatoria es: " << s <<endl;
	return 0;
}*/


		
													//ejercicio en clase 3 (adicion de pi) [funciona correctamente]


/*int main() {
	
	float x, s = 0;
	int n;

	cout << "Digite el valor de x para la sumatoria: "; cin >> x;
	cout << "\nDigite el valor de n para los factoriales: "; cin >> n;

	float p = 1, f = 1, op = 0;

	for (int i = 2; i <= n+1; i++) {

		p = p * x;				//potencias (dividendo)

		f = f * i;				//factoriales (divisor)

		op = p / f;				// operacion de division

		cout << "\n" << p << " " << f;

		s = s + op;
	}
	s = s + 3.1416;
	cout << "\n\nEl valor de la sumatoria es: " << s << endl;
	
	return 0;
}*/

//															   --------------------
//															    Serie de Fibonacci
//															   --------------------																

/*int main() {
	
	int n, s = 0;

	cout << "Digite cuantos elementos quiere obtener de la serie de Fibonacci: "; cin >> n; cout << endl;

	int a = 0, b = 1, c = 0;

	cout << a << " ";						//imprime el valor 0 al comienzo de la serie

	for (int i = 2; i <= n; i++) {			// 'i' comienza en 2 para que imprima n-1 digitos porque ya se imprime el primer digito

		c = a + b;							//el sumador para la serie

		b = a;								

		a = c;								// 'a' toma el valor de 'c' para hacer la suma de digitos
		
		cout << c << " ";					//imprime cada valor de la seria a partir del primer 1

	}
	cout << "\n";
	return 0;
}*/

//															   --------------------
//															    Serie de Fibonacci		(ver solo el valor y no la serie)
//															   --------------------																

/*
int main() {

	int n, s = 0;

	cout << "Digite cuantos elementos quiere obtener de la serie de Fibonacci: "; cin >> n; cout << endl;

	int a = 0, b = 1, c = 0;

	for (int i = 1; i <= n; i++) {		

		c = a + b;							//el sumador para generar los valores en la serie

		b = a;

		a = c;								// 'a' toma el valor de 'c' para hacer la suma de digitos

		s = s + c;							// suma los valores de cada elemento de la seria

	}
	cout <<"Durante "<<n<<" dias, se prudujeron "<<s<<" conejos";

	cout << "\n";

	return 0;
}*/
								 


