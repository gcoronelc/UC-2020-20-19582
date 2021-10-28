#include <iostream>
#include "LibreriaEGCC.h"
#include "Utilitarios.h"
#include "LecturaDatos.h"
using namespace std;

// Variables globales
double tipoCambio;

// Funciones y procedimiento
void procLeerTipoCambio();
void procRegistrarVenta();
void procListado();
void procReporte();
void procSalir();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Leer el tipo de cambio
	mostrarCabecera();
	procLeerTipoCambio();	
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
void procLeerTipoCambio(){
	cout << "Lectura de tipo de cambio" << endl;
	cout << "-----------------------------------" << endl;
	tipoCambio = leeDatoDoublePositivo("Ingrese tipo de cambio: ");
}

void procRegistrarVenta(){
	// Variables
	string cliente;
	char paquete;
	int cantidad;
	double precio, porcDcto, dcto, importeTotal, importeNeto;
	// Lectura
	cout << "Lectura de datos" << endl;
	cout << "-----------------------------" << endl;
	cliente = leeDatoString("Nombre del cliente: ");
	paquete = leePaquete();
	cantidad = leeDatoEnteroPositivo("Ingrese cantidad: ");
	// Proceso
	precio = obtenerPrecio(paquete) * tipoCambio;
	porcDcto = obtenerPorcDcto(paquete);
	importeTotal = precio * cantidad;
	dcto = importeTotal * porcDcto / 100;
	importeNeto = importeTotal - dcto;
	// Reporte
	cout << endl;
	cout << "Reporte de venta" << endl;
	cout << "----------------------" << endl;
	cout << "Precio: " << precio << endl;
	cout << "Importe: " << importeTotal << endl;
	cout << "Porc. descuento: " << porcDcto << "%" << endl;
	cout << "Descuento: " << dcto << endl;
	cout << "Importe neto: " << importeNeto << endl;
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


