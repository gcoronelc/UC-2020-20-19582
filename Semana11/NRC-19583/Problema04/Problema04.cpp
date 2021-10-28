#include <iostream>
#include "Utilitarios.h"
#include "LibreriaEGCC.h"
#include "LecturaDatos.h"
using namespace std;

// Funciones y procedimientos
void procRegistrarEmpleado();
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
		// Menú
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		// Procesar el menú
		system("cls");
		switch(opMenu){
			case 1:
				procRegistrarEmpleado();
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

// Funciones y procedimientos

void procRegistrarEmpleado(){
	// Variables
	string nombre;
	char categoria;
	double sueldo, porcAumento, aumento, nuevoSueldo;
	// Cabecera
	cout << endl;
	cout << "SISTEMA DE PLANILLAS" << endl;
	cout << "Registrar enpleado" << endl;
	cout << "==================================" << endl;
	// Lectura
	nombre = leeDatoString("Nombre del empleado: ");
	categoria = leeCategoria();
	sueldo = leeDatoDoublePositivo("Ingrese sueldo: ");
	// Proceso
	porcAumento = obtenerPorcAumento(categoria);
	aumento = sueldo * porcAumento / 100.0;
	nuevoSueldo = sueldo + aumento;
	// Reporte
	cout << endl;
	cout << "Reporte de nuevo sueldo" << endl;
	cout << "==================================" << endl;	
	cout << "Sueldo: " << sueldo << endl;
	cout << "Porc. de aumento: " << porcAumento << "%" << endl;
	cout << "Aumento: " << aumento << endl;
	cout << "Nuevo sueldo: " << nuevoSueldo << endl;
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
	cout << endl;
	cout << "SISTEMA DE PLANILLAS" << endl;
	cout << "Despedida" << endl;
	cout << "==================================" << endl;
	cout << "Que tenga un buen día" << endl;
	cout << "Vuelva pronto" << endl;
	cout << endl;
}
