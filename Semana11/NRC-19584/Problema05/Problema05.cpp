#include <iostream>
#include "LibreriaEGCC.h"
#include "Utilitarios.h"
using namespace std;

// Funciones y procedimiento
void procRegistrarVenta();
void procListado();
void procReporte();
void procSalir();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		// Menu
		mostrarCabecera();
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		// Procesar opción del menú
		mostrarCabecera();
		switch(opMenu){
			case 1:
				procRegistrarVenta();
				break;
			case 2:
				procListado();
				break;
			case 3:
				procReporte();
				break;
			case 4:
				procSalir();
				break;
		}
		// Fin
		if(opMenu!=4){
			system("pause");
		}
	} while(opMenu!=4);
	// Fin
	system("pause");
	return 0;
}

// Funciones y procedimiento
void procRegistrarVenta(){
	cout << "En construcción" << endl;
	cout << endl;
}

void procListado(){
	cout << "En construcción" << endl;
	cout << endl;
}

void procReporte(){
	cout << "En construcción" << endl;
	cout << endl;	
}

void procSalir(){
	cout << "Fin del programa" << endl;
	cout << "Vuelva pronto" << endl;
	cout << endl;	
}


