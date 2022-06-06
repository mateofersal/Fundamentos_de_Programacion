//Practico 7 Vectores

/*
#include<iostream>
using namespace std;

void lect_vect(int V[], int n) {					//lectura de elementos de un vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int valor_max(int V[], int n) {						//obtiene el valor mas alto de un vector

	int maximo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] > maximo) {

			maximo = V[i];
		}
	}
	return maximo;
}

int valor_min(int V[], int n) {						//obtiene el valor mas bajo de un vector

	int minimo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] < minimo) {

			minimo = V[i];
		}
	}
	return minimo;
}
	
int promedio(int V[], int n) {					//obtiene la suma de elementos de un vector para despues divirlos entre 'n' en el main

	int s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s;
}

void same_vec_inv(int V[], int n) {					//invierte el vector en el mismo vector

	int aux;

	int m = n - 1;

	for (int i = 0; i < n / 2; i++, m--) {

		aux = V[i];

		V[i] = V[m];

		V[m] = aux;
	}
}

void new_vec_inv(int V[], int X[], int n) {			//crea un nuevo vector que es el invertido de un vector

	int m = n - 1;

	for (int i = 0; i < n; i++, m--) {

		X[m] = V[i];
	}
}

void show_vec(int V[], int n) {							//muestra un vector

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void copy_vec(int V[], int X[], int n) {				//copia un vector

	for (int i = 0; i < n; i++) {

		X[i] = V[i];
	}
}

void capicua(int V[], int X[], int n) {				//de dos vectores (uno copia del original y el otro el original invertido) verifica si son capicua

	for (int i = 0; i < n; i++) {

		if (V[i] == X[i]) {

			cout << "\nEl vector es capicua"; break;
		}
		else {
			cout << "\nEl vector no es capicua"; break;
		}
	}
}

void promedio_tres(int V[], int n) {				//obtiene el promedio cada tres elementos del vector

	float s = 0;

	for (int i = 0; i < n - 2; i++) {
		
		s = (s + V[i] + V[i + 1] + V[i + 2])/3;

		cout << "P" << i + 1 << ": " << s;
		cout << "\n";

		s = 0;
	}
}

void concatenar_vec(int V[], int X[], int C[], int n, int m) {		//concatena dos vectores en uno nuevo

	int aux = 0;

	for (int i = 0; i < n; i++) {

		C[i] = V[i];
	}
	for (int i = n; i < m+n; i++) {

		C[i] = X[aux];

		aux++;
	}
}

void ordenar_men_may(int V[], int n) {						//ordena un vector de menor a mayor		

	int aux;

	for (int k = 1; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] > V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

void ordenar_may_men(int V[], int n) {						//ordena un vector de mayor a menor		

	int aux;

	for (int k = 1; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] < V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}



void lect_vect_contador(int V[], int n) {					//lectura del vector con un contador para saber los ceros, los positivos y los negativos

	int cont_cero = 0, cont_pos = 0, cont_neg = 0;
	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];

		if (V[i] == 0) {

			cont_cero++;
		}
		if (V[i] > 0) {

			cont_pos++;
		}
		if (V[i] < 0) {

			cont_neg++;
		}
	}
	cout << "\nLa cantidad de ceros en el vector es: "<< cont_cero;
	cout << "\nLa cantidad de positivos en el vector es: " << cont_pos;
	cout << "\nLa cantidad de nehativos en el vector es: " << cont_neg;
}

void fibonacci(int V[], int n) {						//crea un vector que son los elementos de la serie Fibonacci empezando en 1,1,2,3,5,8,13...

	int a = 1, b = 0, c = 0;

	for (int i = 1; i <= n; i++) {

		b = a;
		a = c;
		c = a + b;

		V[i] = c;

		cout << "F[" << i-1 << "]=" << V[i] << "  ";
	}

}

void mayor_diferencia(int V[], int n) {						//obtiene el valor mas grande de la diferencia de dos elementos consecutivos de un vector

	int diferencia = V[0] - V[1];

	for (int i = 0; i < n-2; i++) {

		int dif_act = V[i + 1] - V[i + 2];

		if (dif_act > diferencia) {

			diferencia = dif_act;
		}
	}
	cout << "La diferencia mayor es: "<<diferencia;
}

void eliminar_repetido(int V[], int n) {

	for (int i = 0; i < n; i++) {			//ciclo normal 

		for (int k = i + 1; k < n; k++) {		// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k]) {				// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) {		// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}										
		}
	}

	show_vec(V, n);				//imprime el vector sin los elementos repetidos con el tamaño n reducido
}


int main() {

	int A[50];
	int n;

	cout << "Digite el tamano del vector: "; cin >> n;

	fibonacci(A, n);

	return 0;
}
*/

														//parcial enviado por wpp y otros ejercicios de wpp


//Calcular las diferencias elemento a elemento de dos vectores

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void diferencia_elemento(int V[], int X[], int C[], int n) {

	for (int i = 0; i < n; i++) {

		C[i] = V[i] - X[i];
	}
}

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

int valor_max(int V[], int n) {						//obtiene el valor mas alto de un vector

	int maximo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] > maximo) {

			maximo = V[i];
		}
	}
	return maximo;
}

int valor_min(int V[], int n) {						//obtiene el valor mas bajo de un vector

	int minimo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] < minimo) {

			minimo = V[i];
		}
	}
	return minimo;
}


int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano vectores: "; cin >> n;

	cout << "\nPrimer vector \n"; lect_vect(A, n);
	cout << "\nSegundo vector \n"; lect_vect(B, n);

	cout << "\nVector de diferencias: ";
	diferencia_elemento(A, B, C, n);				//obtiene las diferencuias en un nuevo vector

	show_vec(C, n);									//imprime las diferencias

	cout << "\nValor mayor: " << valor_max(C, n);
	cout << "\nValor menor: " << valor_min(C, n);


}
*/

//obtener la longitud de la frase y la cantiad de 'a' que tiene

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void letra_a(char V[], int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == 'a') {

			cont++;
		}
	}
	cout << cont;
}


int main() {

	char A[50];
	int n;

	cout << "Escriba la oracion:"; cin.get(A, 50);

	n = strlen(A);

	cout << "\nLa longitud del texto es: " << n;

	cout << "\n\nLa cantidad de vocales a que tiene es: ";
	letra_a(A, n);

	return 0;
}
*/

//dado un vector de ventas, mostrar las tres mayores ventas (mostrar los 3 valores mas altos)

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void ordenar_may_men(float V[], int n) {						//ordena un vector de mayor a menor		

	float aux;

	for (int k = 1; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] < V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

void lect_vect(float V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void show_vec(float V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

int main() {

	float A[50];
	int n;

	cout << "Digite el tamano del vector: "; cin >> n;
	lect_vect(A, n);

	ordenar_may_men(A, n);

	cout << "Las ventas mas altas fueron: ";
	show_vec(A, 3);


	return 0;
}
*/

// dado un vector, escribir un numero para revisar y ver cuantas veces se repite en el vector

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];

		
	}
}

void revisar_num(int V[], int n, int num) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == num) {

			cont++;
		}
	}
	cout << "\nEl numero " << num << " se repite " << cont << " veces";
}

int main() {

	int A[50], C[50];
	int n, num;

	cout << "Digite el tamano del vector: "; cin >> n;
	lect_vect(A, n);

	cout << "\nNumero a revisar: "; cin >> num;

	revisar_num(A, n, num);

}
*/

//dados dos vectores de tamaño igual, hacer un tercer vector con los valores comunes de ambos vectores

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout<<"["<<i<<"]="<< V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int comunes(int V[], int X[], int C[], int n) {

	int size = 0;
	
	for (int i = 0; i < n; i++) {

		for (int k = 0; k < n; k++) {

			if (V[i] == X[k]) {

				C[size] = V[i];
				size++;
			}
		}
	}
	return size;
}

void eliminar_repetido(int V[], int n) {

	for (int i = 0; i < n; i++) {			//ciclo normal 

		for (int k = i + 1; k < n; k++) {		// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k]) {				// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) {		// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}
		}
	}
	show_vec(V, n);
}

int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano de los vectores : "; cin >> n;

	cout << "\nPrimer vector: \n"; lect_vect(A, n);
	cout << "\nSegundo vector: \n"; lect_vect(B, n);

	cout << "\nVector de los comunes\n";
	int size = comunes(A, B, C, n);

	eliminar_repetido(C, size);

	return 0;
}
*/

//dados dos vectores de caracteres tamaño n y m, hacer la union de esos caracteres y eliminar los repetidos

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void lect_vect(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

void eliminar_repetido(char V[], int n) {

	for (int i = 0; i < n; i++) {				// son dos for para ver el primer elemento de vec1 con todos del vec2

		for (int k = i + 1; k < n; k++) {		// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k]) {				// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) {		// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}
		}
	}

	show_vec(V, n);				//imprime el vector sin los elementos repetidos con el tamaño n reducido
}

void concatenar_vec(char V[], char X[], char C[], int n, int m) {		//concatena dos vectores en uno nuevo

	int aux = 0;

	for (int i = 0; i < n; i++) {

		C[i] = V[i];
	}
	for (int i = n; i < m + n; i++) {

		C[i] = X[aux];

		aux++;
	}
}

int main() {

	char letras[50], letras2[50], letras3[50];
	int n, m;

	cout << "Tamano primer vector: "; cin >> n;
	lect_vect(letras, n);

	cout << "\nTamano segundo vector: "; cin >> m;
	lect_vect(letras2, m);
	
	cout << "\nPrimer vector: ";
	show_vec(letras, n);

	cout << "\nSegundo vector: ";
	show_vec(letras2, m);

	cout << "\n\nLa union de vectores es: ";
	concatenar_vec(letras, letras2, letras3, n, m);

	//eliminar_repetido(letras3, n + m);

}*/

//dada una cantidad n de palabras, colocarlas en un string separadas por un espacio e imprimis toda la frase

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

void imprimir_frase(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << " ";
	}

}

int main() {

	int n;
	string palabra[50];
	
	cout << "Digite la cantidad de palabras: "; cin >> n;

	lect_vect(palabra, n);

	imprimir_frase(palabra, n);
	
	return 0;
}
*/

//de dos listas de caracteres obtener los comunes (interseccion) y eliminar los repetidos

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void show_vec(char V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i];
	}
}

void lect_vect(char V[]) {

	cin.getline(V, 50);
}

int comunes(char V[], char X[], char C[], int n, int m) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {

			if (V[i] == X[k]) {

				C[size] = V[i];

				size++;
			}
		}
	}
	return size;
}

void eliminar_repetido(char V[], int n) {

	for (int i = 0; i < n; i++) {				//ciclo normal 

		for (int k = i + 1; k < n; k++) {		// k = i + 1, para ver el elemento siguiente del vector

			while (V[i] == V[k]) {				// mientras V[i] = V[j] (o sea V[i] = V[i+1]) mientras haya un elemento repetido

				for (int j = k; j < n; j++) {		// se crea un ciclo para colocar el elemento sgte	
													// en la casilla del repetido y recorrer el resto de elementos a 
					V[j] = V[j + 1];				// una celda anterior, para eso el for
				}
				n--;								//como hay un elemento repetido, el tamaño disminuye
			}
		}
	}
	show_vec(V, n);								//imprime el vector sin los elementos repetidos con el tamaño n reducido
}


int main() {

	int n, m, size;
	char A[50], B[50], C[50];
	
	cout << "Primeros caracteres: "; lect_vect(A);
	
	cout << "\nSegundos caracteres: "; lect_vect(B);

	n = strlen(A);

	m = strlen(B);

	cout << "\nVector de los comunes: ";
	size = comunes(A, B, C, n, m);			//se obtiene el tamano del vector de los comunes para trabajarlos en el main

	eliminar_repetido(C, size);
	
	return 0;
}
*/

//de una cantidad n, obtener cuales son digitos primos y crear un vector con los primos y otro con los no primos

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout<< V[i] << "  ";
	}
}


int main() {

	int num;
	int primo[50], noprimo[50];

	cout << "Digite el numero: "; cin >> num;
	
	int cont = 0;
	int cont2 = 0;

	while (num > 0) {

		int resto = num % 10;

		num = num / 10;

		if (resto == 2 || resto == 3 || resto == 5 || resto == 7) {

			primo[cont] = resto;

			cont++;
		}
		else {

			noprimo[cont2] = resto;

			cont2++;
		}
	}
	cout << "\nEl vector de los primos: ";
	show_vec(primo, cont);
	cout << "\nEl vector de los no primos: ";
	show_vec(noprimo, cont2);

	return 0;
}
*/

//vector que sea de numeros del 1 al 20, obtenga el promedio e imprime los primos de ese vector mayores al promedio de forma descendente

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
float promedio(int V[], int n) {

	float s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s / n;
}

void ordenar_may_men(int V[], int n) {						//ordena un vector de mayor a menor		

	int aux;

	for (int k = 1; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (V[i] < V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

int vec_primos(int V[], int B[], int n) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == 2 || V[i] == 3 || V[i] == 5 || V[i] == 7 || V[i] == 11 || V[i] == 13 || V[i] == 17 || V[i] == 19) {

			B[aux] = V[i];
			aux++;
		}
	}
	return aux;
}

int primos_mayores(int B[], int C[], int n, float prom) {
	
	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (B[i] > prom) {

			C[aux] = B[i];
			aux++;
		}
	}
	return aux;
}

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano del vector:"; cin >> n;
	cout << "\nVector del 1 al 20 \n";
	lect_vect(A, n);

	float prom = promedio(A, n);
	cout << "\nEl promedio del vector es: " << prom;

	int size1= vec_primos(A, B, n);

	int size2 = primos_mayores(B, C, n, prom);

	cout << "\nVector de los primos: ";
	show_vec(B, size1);

	cout << "\nVector primos mayores al promedio: ";
	ordenar_may_men(C, size2);
	show_vec(C, size2);

	return 0;
}
*/

//ejercicio de concatenar listas de string

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

void concatenar_vec(string V[], string X[], string C[], int n, int m) {		//concatena dos vectores en uno nuevo

	int aux = 0;

	for (int i = 0; i < n; i++) {

		C[i] = V[i];
	}
	for (int i = n; i < m + n; i++) {

		C[i] = X[aux];

		aux++;
	}
}

void show_vec(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << V[i]<<"\n";
	}
}


int main() {

	string nombre[50], nombre2[50], nombre3[50];
	int n, m;

	cout << "Tamano primer lista: "; cin >> n;
	lect_vect(nombre, n);

	cout << "Tamano segunda lista: "; cin >> m;
	lect_vect(nombre2, m);
	
	concatenar_vec(nombre, nombre2, nombre3, n, m);

	cout << "\n\nLista concatenada: \n";
	show_vec(nombre3, n+m);

	return 0;
}*/

//ejercicio sacar promedios de dos valores consecutivos

/*

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void promedio(float V[], int n) {

	float prom = 0;

	for (int i = 0; i < n - 1; i++) {

		prom = (V[i] + V[i + 1]) / 2;

		cout << "P" << i + 1 << "=" << prom << "  ";

		prom = 0;
	}
}

void lect_vect(float V[], int n) {					//lectura de elementos de un vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int main() {

	float A[50];
	int n;

	cout << "Tamano del vector: "; cin >> n;
	lect_vect(A, n);

	cout << "\nLos promedios son: \n";
	promedio(A, n);
}
*/


																			// 3er Parcial
																			
//pregunta 1

/*

Pregunta Nro.: 1
Author: Mateo Fernandez Salvatierra
Fecha: 23-Nov-2021
Enunciado del problema: Elaborar un programa que pida n palabras por teclado y los coloque en una string separada por un espacio.

Entrada:  
No
busques
personas
con
tus
mismos
gustos
busca
personas
con
tus
mismos
valores
Salida: No busques personas con tus mismos gustos, busca personas con tus mismos valores.

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {

	for (int i = 0; i < n; i++) {

		cin >> V[i];
	}
}

void imprimir_frase(string V[], int n) {

	string texto=" ";

	for (int i = 0; i < n; i++) {

		texto = texto + V[i] + " ";
	}
	cout << texto;
}

int main() {

	int n;
	string palabra[50];

	cout << "Digite la cantidad de palabras: "; cin >> n;

	lect_vect(palabra, n);

	cout << "\nLa frase es: ";
	imprimir_frase(palabra, n);

	return 0;
}
*/

//pregunta 2 original

/*
Pregunta Nro.: 2
Author: Mateo Fernandez Salvatierra
Fecha: 23-Nov-2021
Elaborar un programa que determine cuantas palabras comienzan con una vocal en una cadena introducida por teclado.

Entrada (texto): “Esta es una entrada de texto para probar número de palabras que inician con una vocal”

Salida: 6 palabras (Esta, es, una, entrada, inician, una)


#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void vocal_inicial(char V[], int n) {

	int cont = 0;

	for (int i = 0; i < n; i++) {

		while (V[i] != ' ') {								

			if (V[i + 1] == 'a' || V[i + 1] == 'e' || V[i + 1] == 'i' || V[i + 1] == 'o' || V[i + 1] == 'u') {

				cont++;
			}
			i++;
		}
	}
	cout << "\nSon " << cont << " palabras";
}

int main() {

	char frase[100];
	char frase2[100];
	int n;

	cout << "Escriba la frase: ";
	cin.get(frase, 100);

	n = strlen(frase);

	vocal_inicial(frase, n);

	return 0;
}
*/

// pregunta 2 arreglado

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void vocal_inicial(char V[], int n) {						

	int aux = 0;
	int cont = 0;															
	char palabra_vocal[100];																	//añadido un nuevo char que contenga todas las palabras que tienen vocal inicial

	if (V[0] == 'a' || V[0] == 'e' || V[0] == 'i' || V[0] == 'o' || V[0] == 'u') {				//if añadido para evaluar la palabra inicial

		for (int i = 0; i < n && V[i] != ' '; i++) {									//for añadido para copiar los elementos del char en un nuevo char

			palabra_vocal[aux] = V[i];
			aux++;
		}
		palabra_vocal[aux] = ' ';																// se coloca un caracter como espacio para separar las palabras y luego aux++ para entrar a la sgte posicion
		aux++;
		cont++;
	}
	
	for (int i = 0; i < n; i++) {

		while (V[i] == ' ') {								// cambio de != por ==

			if (V[i + 1] == 'a' || V[i + 1] == 'e' || V[i + 1] == 'i' || V[i + 1] == 'o' || V[i + 1] == 'u') {
		
				for (int k = i + 1; k < n && V[k] != ' '; k++) {						//for para copiar los elementos del char en el nuevo char				

					palabra_vocal[aux] = V[k];
					aux++;
				}
				palabra_vocal[aux] = ' ';
				aux++;
				cont++;
			}
			i++;
		}
	}
	palabra_vocal[aux] = '\0';
	cout << "\nSon " << cont << " palabras";
	cout << "\nLas palabras son: "<<palabra_vocal;
}

int main(){

	char frase[100];
	int n;

	cout << "Escriba la frase: ";
	cin.get(frase, 100);

	n = strlen(frase);

	vocal_inicial(frase, n);

	return 0;
}
*/
	
// pregunta 3 

/*
Pregunta Nro.: 3
Author : Mateo Fernandez Salvatierra
Fecha : 23 - Nov - 2021
Dados dos vectoes de igual tamaño obtener los elementos comunes sin repetidos


#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void show_vec(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ": "; cin >> V[i];
	}
}

int comunes(int V[], int X[], int C[], int n) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < n; k++) {

			if (V[i] == X[k]) {

				C[size] = V[i];
				size++;
			}
		}
	}
	return size;
}

void eliminar_repetido(int V[], int n) {

	for (int i = 0; i < n; i++) {			

		for (int k = i + 1; k < n; k++) {		

			while (V[i] == V[k]) {				

				for (int j = k; j < n; j++) {		
													
					V[j] = V[j + 1];				
				}
				n--;								
			}
		}
	}
	show_vec(V, n);
}

int main() {

	int n;
	int A[50], B[50], C[50];

	cout << "Tamano de los vectores : "; cin >> n;

	cout << "\nPrimer vector: \n"; lect_vect(A, n);
	cout << "\nSegundo vector: \n"; lect_vect(B, n);

	cout << "\nVector de los comunes\n";
	int size = comunes(A, B, C, n);

	eliminar_repetido(C, size);

	return 0;
}
*/

//pregunta 4 original

/*			
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main() {

	int k = 0;
	int i = 0;
	char texto[1000];
	string nombres[10];

	cout << "Digite los nombres: ";
	cin.get(texto, 1000);

	while (texto[i] != ', ') {

		nombres[k] = texto[i];

		i++;
		k++;
	}
	for (int i = 0; i < k; i++) {

		cout << nombres[k];
	}
	return 0;
}
*/

//problema 4 arreglado

/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int elimina_comas(char texto[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (texto[i] == ',') {

			for (int k = i; k < n; k++) {

				texto[k] = texto[k + 1];
			}
			size--;
		}
	}
	return size;
}

int separar(char texto[], string nombres[], int n) {

	int size = 0;

	for (int i = 0; i < n; i++) {

		if (texto[i] != ' ') {

			nombres[size] = nombres[size] + texto[i];
		}
		else {
			size++;
		}
	}
	return size+1;			// como despues del nombre final no hay espacio y no aumenta el tamaño del string, aumentamos en 1 para que devuelva el tamaño correcto del string
}

void show_vec(string texto[], int n) {

	for (int i = 0; i < n; i++) {

		cout << texto[i] << "\n";
	}
}

int main(){ 

	int n;
	char texto[1000];
	string nombres[10];

	cout << "Digite los nombres:"; cin.get(texto, 1000);
	n = strlen(texto);

	int a = elimina_comas(texto, n);
	int b = separar(texto, nombres, a);
	show_vec(nombres, b);

	return 0;
}
*/


//borra palabras

/*
#include <iostream>
#include <string.h>
using namespace std;

int separar(char frase[], string palabras[], int n) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != ' ') {

			palabras[aux] = palabras[aux] + frase[i];
		}
		else {

			aux++;
		}
	}
	return aux+1;
}

int eliminacion(string frase[], string seleccion, int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (frase[i] == seleccion) {

			for (int k = i; k < n; k++) {

				frase[k] = frase[k + 1];
			}
			size--;
		}
	}
	return size;
}	

void show_vec(string frase[], int n) {

	for (int i = 0; i < n; i++) {

		cout << frase[i] << " ";
	}
}

int main() {
	
	string palabras[20], seleccion;
	char frase[100];

	cout << "Digite la frase: "; cin.get(frase, 100);
	int n = strlen(frase);
	cout << "\Palabra a borrar: "; cin >> seleccion;
	cout << "\n";

	int a = separar(frase, palabras, n);
	int b = eliminacion(palabras, seleccion, a);

	cout << "La frase con las eliminaciones es: ";
	show_vec(palabras, b);
	cout << "\n";
	

	return 0;
}
*/

// veririficar e imprimir cuantas palabras comienzan con una letra que digite

/*
#include <iostream>
#include <string.h>
using namespace std;

void letra_inicial(char texto[], char letra, int n) {

	char frase[100];
	int aux = 0;

	if (texto[0] == letra) {

		for (int i = 0; i < n && texto[i]!=' '; i++) {

			frase[aux] = texto[i];
			aux++;
		}
		frase[aux] = ' ';
		aux++;
	}

	for (int i = 0; i < n; i++) {

		while (texto[i] == ' ') {								

			if (texto[i + 1] == letra) {

				for (int k = i + 1; k < n && texto[k] != ' '; k++) {									

					frase[aux] = texto[k];
					aux++;
				}
				frase[aux] = ' ';
				aux++;
		
			}
			i++;
		}
	}
	frase[aux] = '\0';
	cout << "\nLas palabras son: " << frase;
}

int main() {

	char letra;
	char texto[100];
	int n;

	cout << "Texto: "; cin.get(texto, 100);
	n = strlen(texto);
	cout << "\nLetra a revisar: "; cin >> letra;
	cout << letra;
	
	letra_inicial(texto, letra, n);


	return 0;
}
*/


// (de Emi) elaborar un codigo que introduzca texto y separe en string cada palabra e imprima 

/*
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	string palabras[20];
	char texto[100];
	int n;
	int aux = 0;

	cout << "Texto:";
	cin.get(texto, 100);
	n = strlen(texto);

	for (int i = 0; i < n; i++) {

		while (texto[i] != ' ' && texto[i] != '\0') {

			palabras[aux] = palabras[aux] + texto[i];
			i++;
		}
		aux++;
	}
	for (int i = 0; i < aux; i++) {

		cout << palabras[i] << "\n";
	}
	return 0;
}*/

// convertir de char a string (metodo profe) 

/*
#include <iostream>
#include <string.h>
using namespace std;

void letra_final(char texto[], int n, char letra) {

	int i = 0;
	string pal_aux = "";
	string palabra[50];
	int size = 0;

	for (i = 0; i < n; i++) {

		if (texto[i] != ' ') {

			pal_aux = pal_aux + texto[i];
		}
		else {

			if (texto[i - 1] == 'a') {
				
				palabra[size] = pal_aux;							//copia el pal_aux en la primera casilla del string
				size++;
			}
		
		pal_aux = "";
		}
	}
	if (texto[i - 1] == 'a') {

		palabra[size] = pal_aux;
		size++;
	}
	cout << "\nLista de palabras: ";
	for (int i = 0; i < size; i++) {

		cout << palabra[i] << "\n";
	}
}

int main() {

	char texto[100];
	int n;
	char letra = 'a';

	cout << "Texto: "; cin.get(texto, 100);
	n = strlen(texto);

	letra_final(texto, n, letra);

	return 0;
}*/

// (de Emi) Enunciado del problema: Dado dos conjuntos de caracteres (A y B), realizar un programa para realizar la unión de conjuntos de los caracteres de A y B. El conjunto resultante es C.

/*
Entrada:  A = { k, b, c, a, I, t, e, Q, p }

B = { a, m, g, p, I, h, k, n }

La UNION es

C = { a, b, c, k, m, g, p, h, n, I, g, e, Q, p, t, h }

#include <iostream>
#include <string.h>
#include<string>
#include"string.h"
using namespace std;

void unir(char cadena1[], char cadena2[], char cadena3[], int n, int m) {

	int aux = 0;

	for (int i = 0; i < n; i++) {

		cadena3[i] = cadena1[i];
	}
	for (int k = n; k < n + m; k++) {

		cadena3[k] = cadena2[aux];
		aux++;
	}
}

void show_vec(char cadena3[], int size) {

	for (int i = 0; i < size; i++) {

		cout << cadena3[i];
	}
}

int elimina_espacios(char cadena3[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (cadena3[i] == ' ' ) {

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	for (int i = 0; i < size; i++) {

		if (cadena3[i] == ' ') {

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	return size;
}

int elimina_comas(char cadena3[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (cadena3[i] == ',') {

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	return size;
}

int elimina_llave1(char cadena3[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (cadena3[i] == '{') {

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	return size;
}

int elimina_llave2(char cadena3[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (cadena3[i] == '}') {

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	return size;
}

void show_vec_coma(char cadena3[], int size) {

	for (int i = 0; i < size; i++) {

		cout << cadena3[i] << " ";
	}
}

void show_vec_espacio(char cadena3[], int size) {

	for (int i = 0; i < size; i++) {

		cout << cadena3[i] << ", ";
	}
}


int main() {

	int n, m;
	char cadena1[50], cadena2[50], cadena3[50];
	char limpio[50];
	
	cout << "Cadena 1:"; cin.get(cadena1, 50);
	cin.ignore();
	cout << "\nCadena 2:"; cin.get(cadena2, 50);

	n = strlen(cadena1);
	m = strlen(cadena2);

	// aqui unimos todos los caracteres sin importar que son

	unir(cadena1, cadena2, cadena3, n, m);

	cout << "\nUnion normal: "; show_vec(cadena3, n + m);

	int a = elimina_llave1(cadena3, n + m);
	cout<<"\nUnion sin llave 1:"; show_vec(cadena3, a);

	int b = elimina_llave2(cadena3, a);
	cout << "\nUnion sin llave 2:"; show_vec(cadena3, b);

	int c = elimina_espacios(cadena3, b);
	cout << "\nUnion sin espacios: "; show_vec(cadena3, c);

	int d = elimina_comas(cadena3, c);

	// a partir de aqui tenemos una union de caracteres limpia y solo damos el formato de impresion

	cout << "\n\nUnion de caracteres bonita (sin comas): "; show_vec(cadena3, d);
	cout << "\nUnion de caracteres separados por coma: "; show_vec_coma(cadena3, d);
	cout << "\nUnion de caracteres separados por espacio:"; show_vec_espacio(cadena3, d);
	cout << "\n";


	return 0;
}
*/

// codigo que copia las palabras que terminan en a

/*
#include <iostream>
#include <string.h>
#include<string>
#include"string.h"
using namespace std;

void final_a(char frase[], int n) {

	string auxiliar = "";
	string palabras[20];
	int aux = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != ' ') {

			auxiliar = auxiliar + frase[i];		// va acumulando hasta que encuentra espacio
		}
		else {

			if (frase[i - 1] == 'a') {

				palabras[aux] = auxiliar;
				aux++;
			}
			auxiliar = "";							// independientemente de si ve la ultima letra a o no, resetea el string para acumular la sgte palabra
															
		}
	}
	if (frase[n-1] == 'a') {					// para verificar la ultima letra

		palabras[aux] = auxiliar;
	}
	aux++;
	for (int i = 0; i < aux; i++) {

		cout << palabras[i] <<" ";
	}
}

int main() {

	int n; 
	char frase[100];
	
	cout << "Frase:"; cin.get(frase, 100);
	n = strlen(frase);

	final_a(frase, n);

	return 0;
}
*/




																		