#include<iostream>
using namespace std;

// limite superior e inferior

/*int main() {

	int lim_inf, lim_sup;
	int dig, valor;

	cout << "Digite el valor del limite inferior: "; cin >> lim_inf;
	cout << "Digite el valor del limite superior: "; cin >> lim_sup;

	if (lim_inf > lim_sup) {

		cout << "Digite  nuevamente" << endl;
		cout << "Digite el valor del limite inferior: "; cin >> lim_inf; cout << endl;
		cout << "Digite el valor del limite superior: "; cin >> lim_sup; cout << endl;
	}
	cout << "Valor a analizar: "; cin >> dig;

	int cont_fuera = 0;
	int cont_igual = 0;
	int suma_dig = 0;

	while (dig != 0) {

		if (dig > lim_inf && dig < lim_sup) {

			suma_dig = suma_dig + dig;
		}
		if (dig < lim_inf && dig > lim_sup) {

			cont_fuera = cont_fuera + 1;
		}
		if (dig == lim_inf || dig == lim_sup) {

			cont_igual = cont_igual + 1;
		}

		cout << "Valor a analizar: "; cin >> dig;
	}
	cout << endl;
	cout << "Suma de digito: " << suma_dig << endl << endl;

	cout << "Numeros fuera de rango: " << cont_fuera << endl << endl;

	cout << "Numeros igual a los limites: " << cont_igual << endl << endl;

	return 0;
}*/	 

// sistema de ecuaciones

/*int main() {

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
}*/

// serie x¹/1 +  x²/2  +  x³/3 

/*int main() {		[6b]

	float n,x;

	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite la potencia hasta la que desea llegar: "; cin >> n;

	float s = 0, p = 1;
	float op = 0;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		op = p / i;

		s = s + op;

		cout << p << " ";
		cout << i << " ";
	}
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";

	return 0;
}*/ 

// serie  x¹/1  -  x²/2  +  x³/3 

/*
int main() {		

	float n, x;

	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite la potencia hasta la que desea llegar: "; cin >> n;

	float s = 0, p = 1;
	float op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		op = p / i;

		s = s + (signo* op);

		signo = signo * -1;
		
		cout << p << " ";
		cout << i << " ";
	}
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";

	return 0;
}*/

// Serie  x¹/1! - x²/2! + x³/3! 

/*int main() {		[6d]

	float n, x;

	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite la potencia hasta la que desea llegar: "; cin >> n;

	float s = 0, p = 1, f = 1;
	float op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + (signo*op);

		signo = signo * -1;
	}
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";

	return 0;
}*/

// Factorial

/*int(fact(int n)) {		[7]
	
	int p = 1;
	
	for (int i = 1; i <= n; i++) {

		p = p * i;

	}
	return p;
}
int main() {
	
	int n;

	cout << "Digite un valor para hallar el factorial: "; cin >> n;

	cout << " \n";
	cout << fact(n);
	cout << " \n";
	return 0;
}*/

//Serie  x¹/1! + X²/2! + X³/3!

/*int main() {			[8]

	float x;
	int n;

	cout << "Digite el valor para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor para el factorial y la potencia a la que desea llegar: "; cin >> n;

	float p = 1, s = 0, f = 1;
	float op = 0;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + op;

		cout << p << " ";
	}
	cout << "La sumatoria es: " << s;

	return 0;
}*/

//Serie  x¹/1! - X²/2! + X³/3! 

/*int main() {			[9]

	float x;
	int n;

	cout << "Digite el valor para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor para el n para el factoria y los exponentes: "; cin >> n;

	float p = 1, s = 0, f = 1;
	float op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + (signo*op);

		signo = signo * -1;

		cout << op << " ";
	}
	cout << " \n";
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";
	return 0;
}*/

// serie seno

/*int main() {		

	float x;
	int n;

	cout << "Digite el valor x para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor n para el exponente: "; cin >> n;

	float p = x, f = 1, op = 0, s = 0, cont_fact = 1;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		s = s + (signo * (p/f));
	
		cout << f << " ";

		p = p * x * x;

		f = f * (cont_fact + 1) * (cont_fact + 2);

		cont_fact += 2;

		signo = signo * -1;

		
	}
	cout << " \n";
	cout << "\nLa sumatoria de la serie del seno es: " << s;
	cout << " \n";
	return 0;
}*/

//serie coseno

/*int main() {			

	float x;
	int n;

	cout << "Digite el valor x para la base de la sumatoria: "; cin >> x;
	cout << "Digite el valor n para el exponente: "; cin >> n;

	float p = (x*x), f = 2, s = 1, cont_fact = 2;
	int signo = -1;

	for (int i = 2; i <= n; i+=2) {

		s = s + (signo * (p / f));

		cout << f << " ";
		
		p = p * x * x;

		f = f * (cont_fact + 1)*(cont_fact + 2);

		cont_fact += 2;

		signo = signo * -1;

		
	}
	cout << " \n";
	cout << "\nLa sumatoria de la serie del seno es: " << s;
	cout << " \n";

	return 0;
}*/

// Estaciones

/*int main() {			[Estaciones]

	int dia, mes;

	cout << "Digite una fecha para determinar la estacion";
	cout << "\n\nDia: "; cin >> dia;
	cout << "\nMes: "; cin >> mes;

	if (dia >= 1 && dia <= 20 && mes == 3) {

		cout << "\nEsa fecha es en verano";			// 1 - 20 de marzo verano
	}
	if (dia >= 21 && dia <= 31 && mes == 3) {

		cout << "\nEsa fecha es en otoño";			// 21 - 31 de marzo otoño
	}
	if (dia >= 1 && dia <= 31 && mes == 4 || mes == 5) {

		cout << "\nEsa fecha es en otoño";			// 1 - 31 de abril/mayo otoño
	}
	if (dia >= 1 && dia <= 20 && mes == 6) {

		cout << "\nEsa fecha es en otoño";			// 1 - 20 junio otoño
	}
	if (dia >= 21 && dia <= 31 && mes == 6) {

		cout << "\nEsa fecha es en invierno";		// 21 - 30 junio invierno
	}
	if (dia >= 1 && dia <= 31 && mes == 7 || mes == 8) {

		cout << "\nEsa fecha es en invierno";		// 1 - 31 julio/agosto invierno
	}
	if (dia >= 1 && dia <= 20 && mes == 9) {

		cout << "\nEsa fecha es en invierno";		// 1 - 20 de septiembre invierno
	}
	if (dia >= 21 && dia <= 31 && mes == 9) {

		cout << "\nEsa fecha es en primavera";		// 21 - 31 septiembre primavera
	}
	if (dia >= 1 && dia <= 31 && mes == 10 || mes == 11) {

		cout << "\nEsa fecha es en primavera";		// 1 - 31 octubre/noviembre primavera
	}
	if (dia >= 1 && dia <= 20 && mes == 12) {

		cout << "\nEsa fecha es en primavera";		// 1 - 20 de diciembre primavera
	}
	if (dia >= 21 && dia <= 31 && mes == 12) {

		cout << "\nEsa fecha es en verano";			// 21 - 31 diciembre verano
	}
	if (dia >= 1 && dia <= 31 && mes == 1 || mes == 2) {

		cout << "\nEsa fecha es en verano";		// 1 - 31 enero/febrero verano
	}
	cout << " \n";
	return 0;
}*/

// Diferencia de horas

/*int main() {			[Diferencia de horas]

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

	comp_h1 = hora1 * 3600 + min1 * 60 + seg1;							//veririficar cual hora es mayor para ponerla como minuendo y la menor como sustraendo
	comp_h2 = hora2 * 3600 + min2 * 60 + seg2;							//conviertiendolo a segundos para saber cual es mayor

	if (comp_h1 < comp_h2) {

		hora1 = hora2; min1 = min2; seg1 = seg2;
		hora2 = copia_h1; min2 = copia_min1; seg2 = copia_seg1;			//intercambio de valores 
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
}*/

// nota final de semestre

/*int main() {			[Notas de semestre]

	float par1, par2, par3, prom_par, ex_fin, pro_fin;

	cout << "Digite las notas de los parciales de el/la estudiante: \n";
	cout << "\nParcial 1: "; cin >> par1;
	cout << "\nParcial 2: "; cin >> par2;
	cout << "\nParcial 3: "; cin >> par3;

	prom_par = (par1 + par2 + par3) / 3 * 0.4;

	cout << "\n ** El valor de los parciales es: "<< prom_par;

	cout << "\n\nDigite la nota del examen final: "; cin >> ex_fin;

	cout << "\n ** El valor del examen final es: " << ex_fin * 0.4;

	cout << "\n\nDigite la nota del proyecto final: "; cin >> pro_fin;

	cout << "\n ** El valor del proyecto final es: " << pro_fin * 0.2;

	float nota_fin = prom_par + (ex_fin * 0.4) + (pro_fin * 0.2);

	cout << "\n\n[La nota final de la materia en este semestres es: " << nota_fin << "] " << endl;
	
	return 0;
}*/

// impuesto trabajador

/*int main() {			[RC-IVA Trabajador]

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

		cout <<nombre<<", su salario no paga RC-IVA y es: " << salario;
		cout << " \n";
	}
	cout << " \n";
	return 0;
}*/

// Formtato 24H a Am/Pm

/*int main() {			[Formato 24h a AM/PM]

	int hora, min, seg;

	string resp = "si";

	while (resp == "si"||resp=="s") {

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
}*/

// Calcula hora con segundos

/*int main() {			[Calcular hora con segundos]

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
}*/

// Manejo de digitos

/*int main() {		[suma de digitos, orden menos significativa a mas, hallar el valor invertido,]
					[pares o impares y ver si son capicuas]
	int n, s = 0;
	int msg = 1;

	cout << "\nDigite el valor del cual desea obtener sus digitos: "; cin >> n;

	int x = n;				// clon de n para mostrar el valor inicial
	int z = 0;				// variable para mostrar el valor inicial invertido 

	while (n > 0) {

		int d1 = n % 10;
		s = s + d1;			// 's' es la suma acumulada de los restos para la suma de los digitos 
		n = n / 10;			// 'n' es el valor inicial dividido en 10 para asi pasar a la cifra sgte.

		z = z * 10 + d1;	// z = 0, entonces z*1=0 y sumandole d1 (el resto de la division) queda 
							// el primer valor para colocar el valor original invertido

		if (msg == 1) {

			cout << "\nEl orden de cifra menos significativa a mas significativa es:\n\n";
			msg = msg + 1;
		}
		if (d1 % 2 == 0) {

			cout << d1 << "--> es par" << endl;			//verificar si el digito obtenido del resto es par
		}
		if (d1 % 2 != 0) {

			cout << d1 << "--> es impar" << endl;		// verificar si el digito obtenido del resto es impar
		}

	}
	cout << "\nLa suma de los digitos es: " << s << endl;

	cout << "\nEl valor original es: " << x << endl;

	cout << "\nEl valor invertido es: " << z << endl;

	if (x == z) {

		cout << "\nLos valores son capicuas";
	}
	else {

		cout << "\nNo son capicuas";
	}

	return 0;
}*/

// MCM 

/*int menor(int x, int y){		

	if (x <= y) {

		return x;

	}
	else return y;
}	

int main() {		[MCM] (minimo comun multiplo)

	int a, b;

	cout << "a: "; cin >> a;
	cout << "b:  "; cin >> b;

	for (int i = menor(a, b); i >= 1; i--) {

		if (a % i == 0 && b % i == 0) {

			cout << "MCM: " << i << endl;
			return 0;
		}

	}
	return 0;
}*/

// MCM Y MCD 

/*int menor(int x, int y) {		[MCD] (maximo comun divisor)

	if (x <= y) {

		return x;

	}
	else return y;
}

int main() {
	
	int a, b, aux;

	cout << "a: "; cin >> a;
	cout << "b:  "; cin >> b;

	for (int i = menor(a,b); i >= 1; i--) {

		if (a % i == 0 && b % i == 0) {

			aux = i;
			cout << "MCM: " << i << endl;
			cout << "MCD: " << a * (b / aux) << endl;		//el mcd puede ser obtenido una vez se cumple la condicion del mcm
			return 0;
		}
	}
	return 0;
}*/

												// examen parcial 2			
												 
//	desglosar digito, obtener la suma de digitos y ver si cadad digito es primo

/*int main() {

	long long n;
	int s = 0;
	string frase = "El digito es: ";

	cout << "\nDigite el valor del cual desea obtener sus digitos: "; cin >> n;

	int x = n;				// clon de n para mostrar el valor inicial
	int z = 0;				// variable para mostrar el valor inicial invertido 

	while (n > 0) {

		int d1 = n % 10;
		s = s + d1;			// 's' es la suma acumulada de los restos para la suma de los digitos 
		n = n / 10;			// 'n' es el valor inicial dividido en 10 para asi pasar a la cifra sgte.

		z = z * 10 + d1;	// z = 0, entonces z*1=0 y sumandole d1 (el resto de la division) queda 
							// el primer valor para colocar el valor original invertido

		if (d1 == 2 || d1 == 3 || d1 == 5 || d1 == 7) {

			cout << "\nEl digito: " << d1 << " es primo";
		}
		
	}
	cout << "\nLa suma de los digitos es: " << s << endl;

	return 0;
}*/

// obtener factorial

/*int fact(int n) {

	int i, p = 1;

	for (i = 1; i <= n; i++) {

		p = p * i;
	}
	return p;
}

int main() {

	int n;

	cout << "Digite el valor n para el factorial: "; cin >> n;

	if (n == 0) {

		cout << "\nEl factorial " << n << "! es: " << 1 << " \n\n";
		return 0;
	}
	
	cout << "\nEl factorial " << n << "! es: " << fact(n);
	cout << " \n\n";

	return 0;
}*/

// Calcular serie Fibonacci

/*void fibo(int z) {
												
	int a = 0, b = 1, c = 1;

	for (int i = 1; i <= z; i ++) {

		c = a + b;

		b = a;

		a = c;

		cout << c << " ";
	}
}

float fibo_suma(int z) {

	int a = 0, b = 1, c = 1, s = 0;

	for (int i = 1; i <= z; i ++) {

		c = a + b;

		b = a;

		a = c;

		s = s + c;

		//cout << c << " ";
	}
	return s;
}

int main() {

	int n;

	cout << "[Importante] La serie va: {1,1,2,3,5,8,13,21...} \n\n";
	cout << "Digite un valor n para calcular la serie Fibonacci: "; cin >> n;

	cout << " \n";
	fibo(n);

	cout << "\nLa suma de los conejos hasta el dia " << n << " es: " << fibo_suma(n);
	cout << " \n";
	
	return 0;
}*/

// MCM Y MCD

/*int menor(int x, int y) {

		if (x <= y) {

			return x;

		}
		else return y;
}

int main() {

	int a, b, aux;

	cout << "Calcule el MCD y el mcm de dos numeros: \n";
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;

	for (int i = menor(a, b); i >= 1; i--) {

		if (a % i == 0 && b % i == 0) {

			aux = i;
			cout << "MCD (maximo comun divisor: " << i << endl;
			cout << "mcm (minimo comun multiplo): " << a * (b / aux) << endl;		//el mcd puede ser obtenido una vez se cumple la condicion del mcm
			return 0;
		}
	}
	return 0;
}*/

												//examen lab Z

/*int main() {

	float n, x;

	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite la potencia y el factorial hasta la que desea llegar: "; cin >> n;

	float s = 0, p = 1, f = 1;
	float op = 0;
	int signo = 1;

	for (int i = 1; i <= n; i++) {

		p = p * x;

		f = f * i;

		op = p / f;

		s = s + (signo * op);

		signo = signo * -1;

		cout << p << "/";
		cout << f << " ";
	}
	cout << "\nLa sumatoria es: " << s;
	cout << " \n";

	return 0;
}*/

//pregunta 2 es obtener factorial identico al examen 2

/*void menu() {

	cout << "-------- MENU ---------";
	cout << "\na. Obtenga el primer digito de un valor";
	cout << "\nb. Calcule la serie numerica [1 + 3 + 5 + ... + n]";
	cout << "\nc. Calcule la serie numerica [1 * 3 * 5 * ... * n]";
	cout << "\nd. Fin de la ejecucion";
}

void primer_dig(int n) {

	int d1;

	while (n > 0) {

		d1 = n % 10;
		n = n / 10;
	}
	cout << d1;
}

int serie_suma(int n) {

	int s = 0;

	for (int i = 1; i <= n; i += 2) {

		s = s + i;
	}
	return s;
}

float serie_prod(int n) {

	int p = 1;

	for (int i = 1; i <= n; i+=2) {

		p = p * i;
	}
	return p;
}	


int main() {

	int valor;
	int n;
	char opcion = 'z';

	while(opcion != 'd') {

		menu();
		cout << "\n\nOpcion: "; cin >> opcion;

		switch (opcion) {

		case 'a': cout << "\Digite el valor para obtener su primer digito: "; cin >> valor;
				cout << "El primer digito es: "; primer_dig(valor); 
				cout << "\n\n";
				break;

		case 'b': cout << "Digite el valor hasta el cual desea hacer la suma: "; cin >> n;
				cout <<"El resultado de esa sumatoria es: "<<serie_suma(n);
				cout << "\n\n";
				break;

		case 'c': cout << "Digite el valor hasta el cual desea la serie de productos: "; cin >> n;
				cout <<"El resultado de esa serie es: "<<serie_prod(n); 
				cout << "\n\n";
				break;

		case 'd': return 0;
		}
	}
	return 0;
}*/

/*void menu() {

	cout << "-------MENU COVID----------";
	cout << "\na. Secuencia de contagiados hasta dia n";
	cout << "\nb. Total de contagiados hasta dia n ";
	cout << "\nc. Fin del menu";

}
int infec(float n) {

	int k = 1;												//subprograma para el crecimiento de infectados (solo valor)\

	for (float  i = 0; i <= n; i+=2.5) {

		cout << k << " ";

		k = k * 2;
	}
	return k;
}

int dia(float n) {											
															// para cambiar el crecimiento por dia, se debe modificar el i++ (suma de valores)
	int r = 1;

	for (float i = 0; i <= n ; i+=2.5) {

		r = r * 2;

	}
	return r-1;
}

int main() {

	float n;
	char opcion = 'z';

	while (opcion != 'c') {

		menu();
		cout << "\n\nOpcion: "; cin >> opcion;

		switch (opcion) {

		case 'a': cout << "Digite el dia n para la secuencia de contagiados: "; cin >> n;
				cout << "La secuencia de infectados es: "; infec(n);
				cout << "\n\n";
				break;

		case 'b': cout << "Digite el valor n para el total de infectados en n dias: "; cin >> n;
				cout << "El total de infectados en ese dia es: " << dia(n);
				cout << "\n\n";
				break;
	
		case 'c': return 0;

		}

	}
	return 0;
}*/


// emiliana

/*int main() {

	int num;

	cout << "Digite el valor: "; cin >> num;

	if (num == 2 || num == 3 || num == 5 || num == 7) {

		cout << "\nEse numero si es primo"; 
		return 0;
	}

	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {

		cout << "\nEse numero no es primo";
	}
	else {

		cout << "\nEse valor si es primo";
	}

	return 0;
}*/