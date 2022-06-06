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
	return s / n;
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

		s = (s + V[i] + V[i + 1] + V[i + 2]) / 3;

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
	for (int i = n; i < m + n; i++) {

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
	cout << "\nLa cantidad de ceros en el vector es: " << cont_cero;
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

		cout << "F[" << i - 1 << "]=" << V[i] << "  ";
	}

}

void mayor_diferencia(int V[], int n) {						//obtiene el valor mas grande de la diferencia de dos elementos consecutivos de un vector

	int diferencia = V[0] - V[1];

	for (int i = 0; i < n - 2; i++) {

		int dif_act = V[i + 1] - V[i + 2];

		if (dif_act > diferencia) {

			diferencia = dif_act;
		}
	}
	cout << "La diferencia mayor es: " << diferencia;
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

