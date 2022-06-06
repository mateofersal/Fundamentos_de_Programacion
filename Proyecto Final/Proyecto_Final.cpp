/*
Nombre: Mateo Fernandez Salvatierra
Registro: 2021112764
Fecha: 08/12/21
Descripcion: Mateo's Bistro es un servicio de restaurantes que ofrece una variedad de productos que van desde platos fuertes hasta tragos.
			 Cuenta con un sistema de contabilidad de gastos, para que el usuario este al tanto de su consumo en determinado momento
			 Finalizado el programa el usuario obtiene informacion acerca de el total de su consumo y un servicio de facturacion
*/

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

void presentacion() {
	
	cout << "\n";
	cout << "							 _______________________________________________\n";
	cout << "							|						|\n";
	cout << "							|       Bienvenido a Mateo's Bistro		|\n";
	cout << "							|	Welcome to Mateo's Bistro		|\n";	
	cout << "							|						|\n";
	cout << "							|    'De los nuestro, para los nuestros'	|\n";
	cout << "							|_______________________________________________|\n";
	cout << "\n\n\n\n\n";
}

void bienvenida(string full_nombre) {

	cout << "							 " << full_nombre << ", sea usted muy bienvenido/a\n\n";
	cout << "							 Es realmente un gusto tenerle por aqui...\n\n";
	cout << "							 Gusta servirse lo que ofrecemos en la casa? ";
}

void respuesta(string resp, int m) {

	for (int i = 0; i < m; i++) {

		resp[i] = tolower(resp[i]);
	}
	if (resp == "si" || resp == "por favor" || resp == "por supuesto" || resp == "claro") {

		cout << "\n\n\n								- NO SE DIGA MAS !!!\n\n";
		cout << "\n						He aqui la carta de la casa, y no dude en pedir lo que guste\n\n";
	}
}

void carta() {

	cout << "							=======================================\n";
	cout << "							|				      |\n";
	cout << "							|    *****   Mateo's Bistro   *****   |\n";
	cout << "							|				      |\n";
	cout << "							=======================================\n\n";
	cout << "					1. Platos						2. Jugos\n";
	cout << "					¯¯¯¯¯¯¯¯¯¯¯¯¯						¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
	cout << "\n					Los platos incluyen una variedad de			Tenemos una gran variedad de frutas, incluidas\n";
	cout<<"					pastas y carnes(especialidad italiana)			las de temporada y algunas exoticas\n";
	cout << "\n					3. Piqueos / Entradas					4. Tragos\n";
	cout << "					¯¯¯¯¯¯¯¯¯¯¯¯¯						¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
	cout << "\n					Los piqueos van desde lo mas practico			Goce de un buen vaso de su elixir preferido\n";
	cout << "					hasta pequeñas pruebas de lo delicioso			para aliviar la velada o animar su espiritu\n";
	cout << "\n					5. Postres						6. Cigarros\n";
	cout << "					¯¯¯¯¯¯¯¯¯¯¯¯¯						¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
	cout << "\n					Nuestros postres son ideales para 			Relajese con nuestra coleccion de cigarros importados\n";
	cout << "					darse un gusto final despues despues			desde un buen Dominicano hasta un clasico Cubano\n";
	cout << "					de comer el manjar del plato principal			\n";
	cout << "\n\n\n";
}

string solo_nombre(string nombre, int n) {

	string solo_nombre;

	for (int i = 0; i < n && nombre[i] != ' '; i++) {

		solo_nombre = solo_nombre + nombre[i];
	}
	return solo_nombre;
}

int menu1(string nombre){
	
	int num, cant;
	float subtotal = 0;;
	string resp1;
	float precios1[20] = { 65, 88, 48, 76, 45, 42, 54, 68 };

	cout << "\n";
	cout << "									Veo que tiene hambre "<<nombre<<"...\n\n";
	cout << "								Aqui tiene la lista de los platos que ofrecemos\n\n\n";
	cout << "					1. Bisteck	¯¯¯¯	Bs. 65		5. Gnocchis		¯¯¯¯	Bs. 45	\n\n";
	cout << "					2. Lomo		¯¯¯¯	Bs. 88		6. Fajitas		¯¯¯¯	Bs. 42  	\n\n";
	cout << "					3. Ravioles	¯¯¯¯	Bs. 48		7. Sorrentinos		¯¯¯¯	Bs. 54  	\n\n";
	cout << "					4. Calzone	¯¯¯¯	Bs. 76		8. Milanesa Napolitana	¯¯¯¯	Bs. 68 	\n\n\n";
	cout << "	Le gustaria probar algo? "; cin >> resp1;


	while (resp1 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantos bistecks? "; cin >> cant;
				subtotal = subtotal + precios1[0] * cant;
				cout << "	Precio de " << cant << " bisteck(s) es: Bs." << precios1[0] * cant; 
				cout<< "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantos lomos? "; cin >> cant;
				subtotal = subtotal + precios1[1] * cant;
				cout << "	Precio de " << cant << " lomo(s) es: Bs." << precios1[1] * cant;
				cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantos platos de ravioles? "; cin >> cant;
				subtotal = subtotal + precios1[2] * cant;
				cout << "	Precio de " << cant << " plato(s) de ravioles es: Bs." << precios1[2] * cant;
				cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantos calzones? "; cin >> cant;
				subtotal = subtotal + precios1[3] * cant;
				cout << "	Precio de " << cant << " calzone(s) es: Bs." << precios1[3] * cant;
				cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantos platos de gnocchis? "; cin >> cant;
				subtotal = subtotal + precios1[4] * cant;
				cout << "	Precio de " << cant << " plato(s) de gnocchis es: Bs." << precios1[4] * cant;
				cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantas fajitas? "; cin >> cant;
				subtotal = subtotal + precios1[5] * cant;
				cout << "	Precio de " << cant << " fajita(s) es: Bs." << precios1[5] * cant;
				cout << "		El subtotal es: Bs." << subtotal; break;

		case 7: cout << "\n	Cuantos platos de sorrentinos? "; cin >> cant;
				subtotal = subtotal + precios1[6] * cant;
				cout << "	Precio de " << cant << " plato(s) de sorrentinos es: Bs." << precios1[6] * cant;
				cout << "	El subtotal es: Bs." << subtotal; break;

		case 8: cout << "\n	Cuantas milanesas? "; cin >> cant;
				subtotal = subtotal + precios1[7] * cant;
				cout << "	Precio de " << cant << " milanesa(s) es: Bs." << precios1[7] * cant;
				cout << "		El subtotal es: Bs." << subtotal; break;
		}
		cout << "\n\nDesea algo mas? "; cin >> resp1;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int menu2(string nombre) {

	int num, cant;
	float subtotal = 0;;
	string resp2;
	float precios2[20] = { 12, 12, 8, 8, 8, 10, 10, 8, 10, 25 };

	cout << "\n";
	cout << "									Veo que esta sediento/a " << nombre << "...\n\n";
	cout << "								Aqui tiene la lista de los jugos y refrescos que ofrecemos\n\n\n";
	cout << "					1. Limonada	¯¯¯¯	Bs. 12		6. Frutilla		¯¯¯¯	Bs. 10\n\n";
	cout << "					2. Piña		¯¯¯¯	Bs. 12		7. Durazno		¯¯¯¯	Bs. 10\n\n";
	cout << "					3. Agua		¯¯¯¯	Bs. 8		8. Mineragua		¯¯¯¯	Bs. 8\n\n";
	cout << "					4. Coca-Cola	¯¯¯¯	Bs. 8		9. Aquarius		¯¯¯¯	Bs. 10\n\n";
	cout << "					5. Agua con gas	¯¯¯¯	Bs. 8		10. Jugo en Jarra	¯¯¯¯	Bs. 25\n\n\n";
	cout << "	Le gustaria probar algo? "; cin >> resp2;

	while (resp2 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantas limonadas? "; cin >> cant;
			subtotal = subtotal + precios2[0] * cant;
			cout << "	Precio de " << cant << " limonada(s) es: Bs." << precios2[0] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantos vasos de piña? "; cin >> cant;
			subtotal = subtotal + precios2[1] * cant;
			cout << "	Precio de " << cant << " vaso(s) de piña es: Bs." << precios2[1] * cant;
			cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantas aguas? "; cin >> cant;
			subtotal = subtotal + precios2[2] * cant;
			cout << "	Precio de " << cant << " agua(s) es: Bs." << precios2[2] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantas botellas de Coke? "; cin >> cant;
			subtotal = subtotal + precios2[3] * cant;
			cout << "	Precio de " << cant << " botellas(s) de Coke es: Bs." << precios2[3] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantas aguas gasificadas ? "; cin >> cant;
			subtotal = subtotal + precios2[4] * cant;
			cout << "	Precio de " << cant << " agua(s) gasificada(s) es: Bs." << precios2[4] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantos vasos de frutilla? "; cin >> cant;
			subtotal = subtotal + precios2[5] * cant;
			cout << "	Precio de " << cant << " vaso(s) de frutilla es: Bs." << precios2[5] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 7: cout << "\n	Cuantos vasos de durazno? "; cin >> cant;
			subtotal = subtotal + precios2[6] * cant;
			cout << "	Precio de " << cant << " vaso(s) de durazno es: Bs." << precios2[6] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 8: cout << "\n	Cuantas mineraguas? "; cin >> cant;
			subtotal = subtotal + precios2[7] * cant;
			cout << "	Precio de " << cant << " mineragua(s) es: Bs." << precios2[7] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 9: cout << "\n	Cuantas aquarius? "; cin >> cant;
			subtotal = subtotal + precios2[7] * cant;
			cout << "	Precio de " << cant << " aquarius es: Bs." << precios2[8] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 10: cout << "\n	Cuantas jarras? "; cin >> cant;
			subtotal = subtotal + precios2[7] * cant;
			cout << "	Precio de " << cant << " jarra(s) es: Bs." << precios2[9] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;
		}
		cout << "\n\nDesea algo mas? "; cin >> resp2;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int menu3(string nombre) {

	int num, cant;
	float subtotal = 0;;
	string resp3;
	float precios3[20] = { 25, 30, 18, 34, 26, 30 };

	cout << "\n";
	cout << "									Deguste estas delicias " << nombre << " ...\n\n";
	cout << "							Aqui tiene la lista de entradas y piqueos que ofrecemos\n\n\n";
	cout << "					1. Dedos de queso	¯¯¯¯	Bs. 25		4. Alitas BBQ		¯¯¯¯	Bs. 34\n\n";
	cout << "					2. Ensalada cesar	¯¯¯¯	Bs. 30		5. Papas cheddar	¯¯¯¯	Bs. 26\n\n";
	cout << "					3. Pan parmesano	¯¯¯¯	Bs. 18		6. Brochetas		¯¯¯¯	Bs. 30\n\n\n";
	
	cout << "	Le gustaria probar algo? "; cin >> resp3;

	while (resp3 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantas ordenes de dedos? "; cin >> cant;
			subtotal = subtotal + precios3[0] * cant;
			cout << "	Precio de " << cant << " orden(es) de dedos es: Bs." << precios3[0] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantos ensaladas? "; cin >> cant;
			subtotal = subtotal + precios3[1] * cant;
			cout << "	Precio de " << cant << " ensalada(s) es: Bs." << precios3[1] * cant;
			cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantos panes? "; cin >> cant;
			subtotal = subtotal + precios3[2] * cant;
			cout << "	Precio de " << cant << " pan(es) es: Bs." << precios3[2] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantas ordenes de alitas? "; cin >> cant;
			subtotal = subtotal + precios3[3] * cant;
			cout << "	Precio de " << cant << " orden(es) de alitas es: Bs." << precios3[3] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantas ordenes de papas? "; cin >> cant;
			subtotal = subtotal + precios3[4] * cant;
			cout << "	Precio de " << cant << " orden(es) de papas es: Bs." << precios3[4] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantos ordenes de brocheras? "; cin >> cant;
			subtotal = subtotal + precios3[5] * cant;
			cout << "	Precio de " << cant << " orden(es) de brochetas es: Bs." << precios3[5] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		}
		cout << "\n\nDesea algo mas? "; cin >> resp3;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int menu4(string nombre) {

	int num, cant;
	float subtotal = 0;;
	string resp4;
	float precios4[20] = { 35, 28, 32, 16, 14, 16, 14, 24, 20, 20 };

	cout << "\n";
	cout << "									" << nombre << " ordene lo que su alma le pida...\n\n";
	cout << "								Aqui tiene la lista de los tragos que ofrecemos\n\n\n";
	cout << "								(Se sirve en vasos y copas personales)\n\n\n";
	cout << "					1. Whiskey 	¯¯¯¯	Bs. 35		6. Vino rosa	¯¯¯¯	Bs. 16\n\n";
	cout << "					2. Vodka	¯¯¯¯	Bs. 28		7. Ceveza	¯¯¯¯	Bs. 14\n\n";
	cout << "					3. Gin		¯¯¯¯	Bs. 32		8. Ron		¯¯¯¯	Bs. 24\n\n";
	cout << "					4. Vino tinto	¯¯¯¯	Bs. 16		9. Mojito	¯¯¯¯	Bs. 20\n\n";
	cout << "					5. Vino blanco	¯¯¯¯	Bs. 14		10. Tequila	¯¯¯¯	Bs. 20\n\n\n";
	cout << "	Le gustaria probar algo? "; cin >> resp4;

	while (resp4 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantos vasos de Whiskey? "; cin >> cant;
			subtotal = subtotal + precios4[0] * cant;
			cout << "	Precio de " << cant << " vaso(s) de whiskey es: Bs." << precios4[0] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantos vasos de Vodka? "; cin >> cant;
			subtotal = subtotal + precios4[1] * cant;
			cout << "	Precio de " << cant << " vaso(s) de vodka es: Bs." << precios4[1] * cant;
			cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantos vasos de Gin? "; cin >> cant;
			subtotal = subtotal + precios4[2] * cant;
			cout << "	Precio de " << cant << " vasos de Gin es: Bs." << precios4[2] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantas copas? "; cin >> cant;
			subtotal = subtotal + precios4[3] * cant;
			cout << "	Precio de " << cant << " copa(s) de vino tinto es: Bs." << precios4[3] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantas copas? "; cin >> cant;
			subtotal = subtotal + precios4[4] * cant;
			cout << "	Precio de " << cant << " copa(s) de vino blanco es: Bs." << precios4[4] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantas copas? "; cin >> cant;
			subtotal = subtotal + precios4[5] * cant;
			cout << "	Precio de " << cant << " copa(s) de vino rosa es: Bs." << precios4[5] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 7: cout << "\n	Cuantos chops? "; cin >> cant;
			subtotal = subtotal + precios4[6] * cant;
			cout << "	Precio de " << cant << " chop(s) de cerveza es: Bs." << precios4[6] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 8: cout << "\n	Cuantas vasos de Ron? "; cin >> cant;
			subtotal = subtotal + precios4[7] * cant;
			cout << "	Precio de " << cant << " vaso(s) de Ron es: Bs." << precios4[7] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 9: cout << "\n	Cuantos mojitos? "; cin >> cant;
			subtotal = subtotal + precios4[7] * cant;
			cout << "	Precio de " << cant << " mojito(s) es: Bs." << precios4[8] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 10: cout << "\n	Cuantos vasos de Tequila? "; cin >> cant;
			subtotal = subtotal + precios4[7] * cant;
			cout << "	Precio de " << cant << " vaso(s) de Tequila es: Bs." << precios4[9] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;
		}
		cout << "\n\nDesea algo mas? "; cin >> resp4;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int menu5(string nombre) {

	int num, cant;
	float subtotal = 0;;
	string resp5;
	float precios5[20] = { 18, 15, 14, 14, 10, 12, 10, 12 };

	cout << "\n";
	cout << "									Disfrute de un delicioso platillo " << nombre << "...\n\n";
	cout << "								Aqui tiene la lista de los postres que ofrecemos\n\n\n";
	cout << "					1. Brownie		¯¯¯¯	Bs. 18		5. Tiramisu		¯¯¯¯	Bs. 10	\n\n";
	cout << "					2. Copa de helado	¯¯¯¯	Bs. 15		6. Torta 		¯¯¯¯	Bs. 12  	\n\n";
	cout << "					3. Pie de limon		¯¯¯¯	Bs. 14		7. Flan			¯¯¯¯	Bs. 10  	\n\n";
	cout << "					4. Pie de manzana	¯¯¯¯	Bs. 14		8. Tarta de mora	¯¯¯¯	Bs. 12 	\n\n\n";
	cout << "	Le gustaria probar algo? "; cin >> resp5;


	while (resp5 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantos brownies? "; cin >> cant;
			subtotal = subtotal + precios5[0] * cant;
			cout << "	Precio de " << cant << " brownie(s) es: Bs." << precios5[0] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantas copas? "; cin >> cant;
			subtotal = subtotal + precios5[1] * cant;
			cout << "	Precio de " << cant << " copa(s) de helado es: Bs." << precios5[1] * cant;
			cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantos pies? "; cin >> cant;
			subtotal = subtotal + precios5[2] * cant;
			cout << "	Precio de " << cant << " pie(s) de limon es: Bs." << precios5[2] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantos pies? "; cin >> cant;
			subtotal = subtotal + precios5[3] * cant;
			cout << "	Precio de " << cant << " pies(s) de manzana es: Bs." << precios5[3] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantos tiramisu? "; cin >> cant;
			subtotal = subtotal + precios5[4] * cant;
			cout << "	Precio de " << cant << " tiramisu es: Bs." << precios5[4] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantos pedazos de torta? "; cin >> cant;
			subtotal = subtotal + precios5[5] * cant;
			cout << "	Precio de " << cant << " pedazo(s) de torta es: Bs." << precios5[5] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 7: cout << "\n	Cuantos flanes? "; cin >> cant;
			subtotal = subtotal + precios5[6] * cant;
			cout << "	Precio de " << cant << " flan(es) es: Bs." << precios5[6] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 8: cout << "\n	Cuantaos pedazos de tarta? "; cin >> cant;
			subtotal = subtotal + precios5[7] * cant;
			cout << "	Precio de " << cant << " tarta(s) de mora es: Bs." << precios5[7] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;
		}
		cout << "\n\nDesea algo mas? "; cin >> resp5;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int menu6(string nombre) {

	int num, cant;
	float subtotal = 0;;
	string resp6;
	float precios6[20] = { 56, 60, 60, 56, 48, 50 };

	cout << "\n";
	cout << "									 " << nombre << " pruebe de nuestra gran coleccion...\n\n";
	cout << "							Aqui tiene la lista de puros y cigarros que disponemos\n\n\n";
	cout << "					1. Lancero	¯¯¯¯	Bs. 56		4. Corona	¯¯¯¯	Bs. 56\n\n";
	cout << "					2. Churchill	¯¯¯¯	Bs. 60		5. Cuaba	¯¯¯¯	Bs. 48\n\n";
	cout << "					3. Robusto	¯¯¯¯	Bs. 60		6. Torpedo	¯¯¯¯	Bs. 50\n\n\n";

	cout << "	Le gustaria probar alguno? "; cin >> resp6;

	while (resp6 != "no") {

		cout << "\n	Eleccion: "; cin >> num;

		switch (num) {

		case 1: cout << "\n	Cuantos lanceros desea? "; cin >> cant;
			subtotal = subtotal + precios6[0] * cant;
			cout << "	Precio de " << cant << " lancero(s) es: Bs." << precios6[0] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 2: cout << "\n	Cuantos Churchill? "; cin >> cant;
			subtotal = subtotal + precios6[1] * cant;
			cout << "	Precio de " << cant << " Churchill es: Bs." << precios6[1] * cant;
			cout << "			El subtotal es: Bs." << subtotal; break;

		case 3: cout << "\n	Cuantos robustos? "; cin >> cant;
			subtotal = subtotal + precios6[2] * cant;
			cout << "	Precio de " << cant << " robusto(s) es: Bs." << precios6[2] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 4: cout << "\n	Cuantos corona? "; cin >> cant;
			subtotal = subtotal + precios6[3] * cant;
			cout << "	Precio de " << cant << " corona(s) de alitas es: Bs." << precios6[3] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		case 5: cout << "\n	Cuantas Cuaba? "; cin >> cant;
			subtotal = subtotal + precios6[4] * cant;
			cout << "	Precio de " << cant << " Cuaba(s) es: Bs." << precios6[4] * cant;
			cout << "	El subtotal es: Bs." << subtotal; break;

		case 6: cout << "\n	Cuantos torpedos? "; cin >> cant;
			subtotal = subtotal + precios6[5] * cant;
			cout << "	Precio de " << cant << " torpedo(s) es: Bs." << precios6[5] * cant;
			cout << "		El subtotal es: Bs." << subtotal; break;

		}
		cout << "\n\nDesea algo mas? "; cin >> resp6;
	}
	cout << "\n	Estimado/a " << nombre << " su subtotal en este momento es: Bs." << subtotal;
	return subtotal;
}

int subtotales(string nombre, int sub1, int sub2, int sub3, int sub4, int sub5, int sub6) {

	int suma = 0;

	cout << "		Estimado/a " << nombre << " los subtotales a pagar son: \n\n";
	cout << "\n	Subtotal de platos:	Bs. " << sub1;
	cout << "\n	Subtotal de jugos:	Bs. " << sub2;
	cout << "\n	Subtotal de entradas:	Bs. " << sub3;
	cout << "\n	Subtotal de tragos:	Bs. " << sub4;
	cout << "\n	Subtotal de postres:	Bs. " << sub5;
	cout << "\n	Subtotal de cigarros:	Bs. " << sub6;
	
	suma = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;

	cout << "\n\n	El total a pagar es de Bs. " << suma;

	return suma;
}

int main(){

	string decision = "si";
	string resp, full_nombre, nombre;
	int opcion;
	int n, m;
	int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0, sub6 = 0;
	float sub_final;

	presentacion();

	cout << "\n	 Por favor, digame su nombre: "; getline(cin, full_nombre);
	n = full_nombre.size();
	
	bienvenida(full_nombre);
	nombre = solo_nombre(full_nombre, n);

	getline(cin, resp);
	m = resp.size();

	if (resp == "no" || resp == "NO") {

		cout << "\n	Vaya, al parecer no podremos ayudarte hoy...\n";
		cout << "\n	Espero vernos pronto...\n\n\n";

		return 0;
	}

	respuesta(resp, m);

	while (decision == "si") {

		carta();
		cout << "	| Elija su opcion: "; cin >> opcion;
		cout << "	|____________________\n\n";
			
		switch (opcion) {

			case 1: sub1 = menu1(nombre); break;
			case 2: sub2 = menu2(nombre); break;
			case 3: sub3 = menu3(nombre); break;
			case 4: sub4 = menu4(nombre); break;
			case 5: sub5 = menu5(nombre); break;
			case 6: sub6 = menu6(nombre); break;
		}
		cout << "\n\nGustaria ver algo mas de nuestro menu? "; cin >> decision;
		cout << "\n\n\n";
	}
	sub_final = subtotales(nombre, sub1, sub2, sub3, sub4, sub5, sub6);

	if (sub_final <= 300) {

		cout << "\n\n	Por su consumo menor a Bs. 300";
		cout << "\n	Tendra descuento de 5%";
		cout << "\n	Siendo su total a pagar de Bs. " << sub_final * 0.95;
	}
	if (sub_final > 300) {

		cout << "\n\n	Por su consumo mayor a Bs. 300";
		cout << "\n	Tendra descuento de 10% ";
		cout << "\n	Siendo su total a pagar de Bs. " << sub_final * 0.90;
	}
	cout << "\n\n\n";

	return 0;	
}
	
