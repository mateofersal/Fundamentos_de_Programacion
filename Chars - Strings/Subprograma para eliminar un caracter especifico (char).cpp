//subprograma para eliminar cualquier caracter desesado


int elimina_comas(char cadena3[], int n) {

	int size = n;

	for (int i = 0; i < n; i++) {

		if (cadena3[i] == ',') {            // solo se debe cambiar el caracter en esta condicion

			for (int k = i; k < n; k++) {

				cadena3[k] = cadena3[k + 1];
			}
			size--;
		}
	}
	return size;
}
