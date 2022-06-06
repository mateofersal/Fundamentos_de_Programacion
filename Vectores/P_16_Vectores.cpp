// sumar los valores de un vector de tamaño n

/*#include<iostream>
using namespace std;

int main() {

	int A[100], n, s = 0, i;

	cout << "Cuantos valores desea sumar: "; cin >> n;			//tamaño del vector
	cout << "\nValores";
	cout << "\n-------------\n";

	for (i = 0; i < n; i++) {

		cin >> A[i];

		s = s + A[i];
	}

	cout << "La suma es: " << s << "\n\n ";

	for (i = 0; i < n; i++) {

		cout << A[i] << " ";
	}

	return 0;
}*/

//leer una lista de nombres e imprimirlos al reves

/*#include<iostream>
using namespace std;

int main() {

	string lista[50];
	int n, i;

	cout << "Cuantas personas quisiera anotar: "; cin >> n;
	cout << "\nNombres";
	cout << "\n-----------\n";

	for (i = 0; i < n; i++) {

		cin >> lista[i];
	}

	cout << "\nLos nombres en orden son: ";
	for (int i = 0; i < n; i++) {

		cout << lista[i] << " ";
	}
	
	cout << "\nLos nombres en orden reverso son: ";
	for (int i = n-1; i >= 0; i--) {

		cout << lista[i] <<" ";
	}
	cout << "\n ";
	
	return 0;

}*/

// Obtener las vocales de una serie de letras

/*#include<iostream>
using namespace std;

int main() {

	char letra[50];
	int n, i;

	cout << "Digite cuentas letras desea analizar:  "; cin >> n;
	cout << "\nletras ";
	cout << "\n-----------\n";

	for (i = 0; i < n; i++) {

		cin >> letra[i];
	}
	cout << "\nLas vocales  en orden reverso son: ";
	for (i = n - 1; i >= 0; i--) {

		if(letra[i] == 'a' || letra[i] == 'e' || letra[i] == 'i' || letra[i] == 'o' || letra[i] == 'u') {

			cout << letra[i];
		}
	}
	return 0;
}*/

//obtener la suma de digitos

/*#include<iostream>
using namespace std;
#define Nmax 50

int main() {

	int A[Nmax], n, s = 0, i;

	cout << "Digite el tamaño n del vector: "; cin >> n; cout << " \n";
	for (i = 0; i < n; i++) {

		cout << "Dato "<<i+1<<" : "; cin >> A[i];cout << " \n";
	}
	for (i = 0; i < n; i++) {

		s = s + A[i];
	}
	cout << "Los elementos del vector son: " << " \n";
	for (i = 0; i < n; i++) {

		cout << "A[" << i << "] = " << A[i] << "    ";
	}
	cout << "\n\nLa suma de valores del vector es: " << s << " \n\n";

	return 0;
}*/

// suma de elementos de un vector

/*#include<iostream>
using namespace std;

void lect_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {
		
		cout << "Dato " << i + 1 << " : "; cin >> V[i]; cout << " \n";
	}
}

int suma_vect(int V[], int n) {

	int s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s;
}

void mostrar_vect(int V[], int n) {

	for (int i = 0; i < n; i++) {

		cout << "A[" << i << "] = " << V[i] << "    ";
	}
}

int main() {

	int A[100], n, s = 0;

	cout << "Digite el tamaño n del vector: "; cin >> n; cout << " \n";
	lect_vect(A, n);

	cout << "\nLa suma de los valores del vector es: " << suma_vect(A, n);

	cout << "El orden de los vectores es: \n";
	mostrar_vect(A, n);

	return 0;
}*/

//programa full vectores

/*
#include<iostream>
using namespace std;

void lect_vec(int V[], int n) {									//lectura de elementos del vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i <<":  "; cin >> V[i];
	}
}

int suma_vec(int V[], int n) {									// suma de elementos del vector

	int s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s;
}

int mayor(int suma_1, int suma_2) {								//que vector tiene la suma de mayor peso

	if (suma_1 < suma_2) {

		return suma_2;
	}
	else 
		
		return suma_1;
}

void show_vec(int V[], int n) {									//impresion del vector a partir de V[0] en forma ascendente

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

int mayor_del_vec(int V[], int n) {								//mayor valor de un vector

	int mayor = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] > mayor) {

			mayor = V[i];
		}
	}
	return mayor;
}

int menor_del_vec(int V[], int n) {								//menor valor de un vector

	int menor = V[0];

	for (int i = 0; i < n; i++) {

		if (V[i] < menor) {

			menor = V[i];
		}
	}
	return menor;
}

void suma_vec_vec(int V[], int X[], int C[], int n) {			//suma de dos vectores componente a componente

	for (int i = 0; i < n; i++) {

		C[i] = V[i] + X[i];
	}
}

int main() {

	int n;
	int A[50];
	int B[50];
	int C[50];

	cout << "Introduzca el tamaño del primer vector: "; cin >> n;
	cout << " \n";
	cout << "Digite el primer vector: \n";
	lect_vec(A, n);

	cout << " \n";
	cout << "Digite el segundo vector: \n";
	lect_vec(B, n);
	

	int suma_1 = suma_vec(A, n);
	int suma_2 = suma_vec(B, m);

	cout << "\n---------------------------------------------------";
	cout << "\n";
	cout << "La suma de los valores del 1er vector es: " << suma_1;

	cout << "\n";
	cout << "La suma de los valores del 2do vector es: " << suma_2;
	cout << "\n";

	cout << "\n---------------------------------------------------";
	cout << "\n";
	cout << "\nEl primer vector es: "; show_vec(A, n);
	cout << "\nEl segundo vector es: "; show_vec(B, m);
	cout << "\n";

	cout << "\n---------------------------------------------------";
	cout << "\n";
	cout << "\nEl valor mas alto del 1er vector es: " << mayor_del_vec(A, n);
	cout << "\nEl valor mas alto del 2do vector es: " << mayor_del_vec(B, m);
	
	cout << "\n---------------------------------------------------";
	cout << "\n";
	cout << "\nDel primer vector: ";
	cout << "\nEl elemento mayor es: " << mayor_del_vec(A, n);
	cout << "\nEl elemento menor es: " << menor_del_vec(A, n);
	cout << "\n\nLa diferencia entre estos valores es: " << mayor_del_vec(A, n) - menor_del_vec(A, n);

	cout << "\n---------------------------------------------------";
	cout << "\n";
	cout << "\nDel segundo vector: ";
	cout << "\nEl elemento mayor es: " << mayor_del_vec(B, m);
	cout << "\nEl elemento menor es: " << menor_del_vec(B, m);
	cout << "\n\nLa diferencia entre estos valores es: " << mayor_del_vec(B, m) - menor_del_vec(B, m);
	cout << "\n";
	

	int valor_mayor = mayor(suma_1, suma_2);
	cout << "\n\n****El vector cuya suma es mayor es: " << valor_mayor << "\n\n";
	

	cout << "\n";
	cout << "El nuevo vector es: "; suma_vec_vec(A, B, C, n);
	cout << "\n";
	show_vec(C, n);

	return 0;
}
*/

//obtener un nuevo vector que tenga los valores en orden opuesto a un primer vector

/*
#include<iostream>
using namespace std;

void lect_vect(float V[], int n) {							//registra los datos del vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ":  "; cin >> V[i];

	}
}

float valor_max(float V[], int n) {							//obtiene el valor mas alto de un vector

	float maximo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] > maximo) {

			maximo = V[i];
		}
	}
	return maximo;
}

float valor_min(float V[], int n) {							//obtiene el valor minimo de un vector

	float minimo = V[0];

	for (int i = 1; i < n; i++) {

		if (V[i] < minimo) {

			minimo = V[i];
		}
	}
	return minimo;
}

float promedio(float V[], int n) {						//obtener la suma de los elementos del vector para luego obtener su promedio en el main

	float s = 0;

	for (int i = 0; i < n; i++) {

		s = s + V[i];
	}
	return s;
}

void new_vec_inv(float V[], float X[], int n) {			//crear un nuevo vector que sea el vector original en orden invertido

	int m = n - 1;

	for (int i = 0; i < n; i++, m--) {

		X[m] = V[i];

	}
}

void show_vec(float V[], int n) {						//impresion del vector

	for (int i = 0; i < n; i++){

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void same_vec_inv(float V[], int n) {					//invertir el mismo vector

	int m = n - 1;
	int aux;

	for (int i = 0; i < n/2; i++, m--) {

		aux = V[m];
		V[m] = V[i];
		V[i] = aux;
	}
}


int main() {

	float A[50], B[50];
	int n;

	cout << "Digite el tamano del vector: "; cin >> n; 
	cout << "\n";
	lect_vect(A, n);
	
	
	cout << "\n\nEl valor mas alto de ese vector es: " << valor_max(A, n);

	cout << "\n\nEl valor mas bajo de ese vector es: " << valor_min(A, n);
	cout << "\n";

	cout << "\nEl promedio de los valores de ese vector es: " << promedio(A, n) / n;
	cout << "\n";
	
	
	cout << "\nEl nuevo vector en orden invertido es: ";
	new_vec_inv(A, B, n);
	show_vec(B, n);
	cout << "\n\n";
	
	
	cout << "\nEl vector invertido es: ";
	same_vec_inv(A, n);
	show_vec(A, n);
	cout << "\n\n";

	return 0;
}
*/

//programa de strings en un vector		imprime la lista de strings revertida en otro vector

/*
#include<iostream>
using namespace std;

void lect_vect(string V[], int n) {							//registra los datos del vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ":  "; cin >> V[i];

	}
}

void show_vec(string V[], int n) {							//impresion del vector

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void new_vec_inv(string V[], string X[], int n) {			//crear un nuevo vector que sea el vector original en orden invertido

	int m = n - 1;

	for (int i = 0; i < n; i++, m--) {

		X[m] = V[i];

	}
}

int main() {

	string lista[50], lista_2[50];
	int n;

	cout << "Digite el tamano de la lista: "; cin >> n;
	lect_vect(lista, n);
	cout << "\n";

	show_vec(lista, n);
	cout << "\n";

	new_vec_inv(lista, lista_2, n);
	cout << "\n";

	cout << "\nLa lista invertida es: ";
	show_vec(lista_2, n);
	cout << "\n\n";

	return 0;
}*/

//ordenar nombres alfabeticamente de un vector (con strings)

/*
#include<iostream>
#include<string>
using namespace std;

void lect_vect(string V[], int n) {							//registra los datos del vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ":  "; getline(cin, V[i]);
	}
}

void show_vec(string V[], int n) {							//impresion del vector

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
	cout << "\n";
}

void ordenar_men_may(string V[], int n) {

	string aux;

	for (int k = 1; k < n; k++) {

		for (int i = 0; i < n-k; i++) {

			if (V[i] > V[i + 1]) {

				aux = V[i];
				V[i] = V[i + 1];
				V[i + 1] = aux;
			}
		}
	}
}

int main() {

	int n;
	string A[50];

	cout << "Digite el tamaño del vector: "; cin >> n;
	cin.ignore(256, '\n');
	lect_vect(A, n);
	cout << "\n";

	ordenar_men_may(A, n);
	cout << "\n";
		 
	cout << "\nEl vector ordenado alfabeticamente es: " << "\n";
	show_vec(A, n);
	cout << "\n";
	return 0;
}
*/

//ordenar elementos de un vector (con numeros)

/*
#include<iostream>
using namespace std;

void lect_vect(int V[], int n) {							//registra los datos del vector

	for (int i = 0; i < n; i++) {

		cout << "Posicion " << i << ":  "; cin >> V[i];

	}
}

void show_vec(int V[], int n) {							//impresion del vector

	for (int i = 0; i < n; i++) {

		cout << "[" << i << "]=" << V[i] << "  ";
	}
}

void ordenar_men_may(int V[], int n) {

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

int main() {

	int n;
	int A[50];

	cout << "Digite el tamaño del vector: "; cin >> n;
	lect_vect(A, n);
	cout << "\n";

	ordenar_men_may(A, n);
	cout << "\n";

	cout << "\nEl vector ordenado de menor a mayor es: ";
	show_vec(A, n);
	cout << "\n";
	return 0;
}
*/

// ordenar elementos de un vector (con char)

/*
#include<iostream>
#include<string>
#include<string.h>
#include"string.h"
using namespace std;

void show_vec(char V[], int n) {							//impresion del vector

	for (int i = 0; i < n; i++) {

		cout <<V[i] << " ";
	}
}

void ordenar_men_may(char V[], int n) {						//ordenar el vector de menor a mayor

	char aux;

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

int main() {

	int n;
	char frase[50];

	cout << "Frase: "; cin.get(frase, 50);
	n = strlen(frase);

	ordenar_men_may(frase, n);

	cout << "\nEl vector ordenado de menor a mayor es:"; show_vec(frase, n);
	
	return 0;
}
*/

// codigo del profe para un vector de caracteres (char) con toupper, tolower y strlen(variable)

/**************************
Objetivo:  Leer e imprimir un vector de characteres
	manejar las funciones strlen, toupper, tolower

***************************

#include <iostream>
#include "string.h"
using namespace std;

int main()
{
	char nombre[10]; int n, i;

	cout << "Nombre:";
	cin >> nombre;
	cout << "Su nombre v1:" << nombre << endl;

	n = strlen(nombre);
	cout << "nombre con for v2:";
	for (i = 0; i < n; i++)
	{
		cout << nombre[i];
	}
	cout << endl;
	cout << "nombre con while v3:";
	i = 0;
	while (nombre[i] != '\0')
	{
		cout << nombre[i];;
		i++;
	}
	cout << endl;
	cout << "Convertiendo a mayusculas" << endl;

	n = strlen(nombre);
	cout << "nombre con mayusculas:";
	for (i = 0; i < n; i++)
	{
		nombre[i] = toupper(nombre[i]);
		cout << nombre[i];
	}
	cout << endl;

	n = strlen(nombre);
	cout << "nombre con Minusculas:";
	for (i = 0; i < n; i++)
	{
		nombre[i] = tolower(nombre[i]);
		cout << nombre[i];
	}
	cout << endl;

	nombre[0] = toupper(nombre[0]);
	cout << "nombre Legal:"; cout << nombre << endl;


	cout << "Gracias" << endl;

	return 0;
}*/

//codigo del profe para leer un nombre con cin,  cin.ignore() para limpiar el buffer y cin.get(variable, tamaño) para digitar con espacios

/*
#include <iostream>
#include "string.h"
using namespace std;

int main()
{
	char nombre[10], nomape[30];

	cout << "Nombre:";
	cin >> nombre;
	cout << "Su nombre v1:" << nombre << endl;
	cin.ignore(); //limpia el buffer
	cout << "Nombre y apellidos:";
	cin.get(nomape, 30);
	cout << "Su nombre y apellidos:" << nomape << endl;


	cout << "Gracias" << endl;

	return 0;
}
*/

// codigo del profe para convertir las primeras letras de un nombre en mayusculas con toupper()

/*
Objetivo:  Convertir las primera letras de un texto en mayuscula
	manejar las funciones strlen, toupper, tolower
	manejar cin.get(var,n); lee linea con blancos
	cin.ignore()  borra buffer

#include <iostream>
#include "string.h"
using namespace std;

int main()
{
	char nomape[30]; int i;


	//cin.ignore(); //limpia el buffer
	cout << "Nombre y apellid
	cin.get(nomape, 30);
	cout << "Su nombre y apellidos:" << nomape << endl;
	i = 0;
	while (nomape[i] != '\0')
	{
		if (nomape[i] == ' ')
		{
			nomape[i + 1] = toupper(nomape[i + 1]);
		}
		i++;
	}
	nomape[0] = toupper(nomape[0]);
	cout << "Su nombre y apellidos correco:" << nomape << endl;
	cout << "Gracias" << endl;

	return 0;
}*/
