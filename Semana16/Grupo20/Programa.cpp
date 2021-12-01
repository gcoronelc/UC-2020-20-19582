/*
 * INTEGRANTES
 * Gustavo Coronel
 * LUIS ANGEL CONDORI RAMON
 * PIERO ARMANDO RODRIGUEZ MARTINEZ
 * JOSUE JHEMY GONZALES CCENTE
 * JHOSEP CRISTIAN QUISPE VASQUEZ
 * WILFREDO PAUL LAZARO CARPIO
 * NICOLE BRENDA REYNAGA SIUCE
 * FERNANDO ALEJANDRO CAJAHUANCA CAMPOS
 * NICOLE BRENDA REYNAGA SIUCE
 * SARAIT MITZURI QUISPE VILLALOBOS
 *
*/

#include <iostream>
#include "LecturaDatos19582.h"
#include "Util.h"
using namespace std;


// Funciones y procedimientos
void procesarVenta();
void reporteVentas();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Inicializar variables globales
	
	// Programa
	do{
		// El menú
		mostrarMenu();
		opMenu = leerOpcion("Opción? ",1,3);
		// Procesar opción
		system("cls");
		switch(opMenu){
			case 1:
				procesarVenta();
				break;
			case 2:
				reporteVentas();
				break;
			case 3:
				salir();
				break;	
		}
		// Fin de opción
		if(opMenu!=3){
			system("pause");
		}
	}while(opMenu!=3);
	// Fin
	return 0;
}


void procesarVenta(){
	cout << "En construcción" << endl;
}

void reporteVentas(){
	cout << "En construcción" << endl;
}
