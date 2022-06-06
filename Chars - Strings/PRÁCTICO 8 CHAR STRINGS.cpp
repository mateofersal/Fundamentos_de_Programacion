void mayusculas(char frase[], int n) {          //convierte a mayusculas todo el char

	for (int i = 0; i < n; i++) {

		frase[i] = toupper(frase[i]);
	}
}



void show_vec(char frase[], int n) {            //muestra el char caracter a carcater

	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}



int palabras(char frase[], int n) {         // cuenta la cantidad de palabras que hay en un char 

	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] == ' ') {

			cont++;
		}
	}
	return cont + 1;
}

void primera_mayus(char frase[], int n) {       // convierte a mayus el primer caracter de un char

	frase[0] = toupper(frase[0]);

	for (int i = 1; i < n; i++) {

		if (frase[i] == ' ') {

			frase[i + 1] = toupper(frase[i + 1]);
		}
	}
}



void invertir(char frase[], int n) {            // invierte un char

	char aux;
	int m = n - 1;

	for (int i = 0; i < n / 2; i++, m--) {

		aux = frase[i];
		frase[i] = frase[m];
		frase[m] = aux;
	}
}

void copy(char frase[], char frase2[], int n) {     // copia un char

	for (int i = 0; i < n; i++) {

		frase2[i] = frase[i];
	}
}



void capicua(char frase[], char frase2[], int n) {       // verifica si una frase es capicua     
														// con el char original y otro copiado invertido
	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (frase[i] != frase2[i]) {

			cont++;
		}
	}
	if (cont > 0) {

		cout << "\nLa frase  no es capicua";
	}
	else {

		cout << "\nLa frase es capicua";
	}
}



void concatenar(char frase1[], char frase2[], char frase3[], int n, int m) {        // concatena dos char

	int aux = 0;

	for (int i = 0; i < n; i++) {

		frase3[i] = frase1[i];
	}
	for (int i = n; i < n + m; i++) {

		frase3[i] = frase2[aux];
		aux++;
	}
}

void elimina_vocales(char frase[], int n) {             // elimina las vocales de un char 

	int size = n;

	for (int i = 0; i < n; i++) {

		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u') {

			for (int k = i; k < n; k++) {

				frase[k] = frase[k + 1];
			}
			size--;
		}
	}
	for (int j = 0; j < size; j++) {

		if (frase[j] == 'a' || frase[j] == 'e' || frase[j] == 'i' || frase[j] == 'o' || frase[j] == 'u') {

			for (int l = j; l < size; l++) {

				frase[l] = frase[l + 1];
			}
			size--;
		}
	}//impresion normal del vector sin vocales
	for (int i = 0; i < size; i++) {

		cout << frase[i];
	}
}



void ordenar(char frase[], int n) {     // ordena de menor a mayor (orden alfabetico) (bubble)

	char aux;

	for (int k = 0; k < n - 1; k++) {

		for (int i = 0; i < n - k; i++) {

			if (frase[i] > frase[i + 1]) {

				aux = frase[i];
				frase[i] = frase[i + 1];
				frase[i + 1] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++) {

		cout << frase[i];
	}
}



int comunes(char frase1[], char frase2[], char frase3[], int n, int m) {        // obtiene los comunes de dos char y los guarda en un nuevo char

	int aux = 0;

	for (int i = 0; i < n; i++) {

		for (int k = 0; k < m; k++) {

			if (frase1[i] == frase2[k]) {

				frase3[aux] = frase1[i];
				aux++;
			}
		}
	}
	return aux;
}



void eliminar_repetidos(char frase[], int size) {       //elimina los repetidos dentro de un char

	for (int i = 0; i < size; i++) {

		for (int k = i + 1; i < size; k++) {

			while (frase[i] == frase[k]) {

				for (int j = i; j < size; j++) {

					frase[j] = frase[j + 1];
				}
			}
			size--;
		}
	}// imprime el vector sin los caracteres repetidos
	show_vec(frase3, size);
}



void vocales_seguidas(char V[], int n) {            // de un char identifica las palabras que tienen dos vocales vocales_seguidas
													// imprime la cantidad y las vocales seguidas
	string palabra_vocal[10];
	int aux = 0;
	int cont = 0;

	for (int i = 0; i < n; i++) {

		if (V[i] == 'a' || V[i] == 'e' || V[i] == 'i' || V[i] == 'o' || V[i] == 'u') {

			if (V[i + 1] == 'a' || V[i + 1] == 'e' || V[i + 1] == 'i' || V[i + 1] == 'o' || V[i + 1] == 'u') {

				for (int k = i; k < i + 2; k++) {

					palabra_vocal[aux] = palabra_vocal[aux] + V[k];
				}
				aux++;
				cont++;
			}
		}
	}
	palabra_vocal[aux] = '\0';
	cout << "\nLa cantidad de dos vocales seguidad es: " << cont;
	cout << "\nLas vocales son: ";

	for (int i = 0; i < aux; i++) {

		cout << palabra_vocal[i] << " ";
	}
}


