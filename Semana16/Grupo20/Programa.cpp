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
#include "Util.h"
using namespace std;

// Variables globales
int contVentas, contClieMasculinoDcto2;

// Funciones y procedimientos
void inicializarVariablesGlobales();
void procesarVenta();
void reporteVentas();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Inicializar variables globales
	inicializarVariablesGlobales();
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

void inicializarVariablesGlobales(){
	contVentas = 0;
	contClieMasculinoDcto2 = 0;
}

void procesarVenta(){
	// Variables
	char sexo;
	int edad, tipoHospedaje, dias;
	float precioDia, importeBruto, importeNeto;
	float porcDcto1, porcDcto2, descuento1, descuento2;
	// Cabecera
	contVentas++;
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Opción: Procesar Venta" << endl;
	cout << "Nro. de venta: " << contVentas << endl;
	cout << "===============================" << endl;	
	// Lectura de datos	
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "===============================" << endl;
	sexo = leeSexoMF("Sexo del cliente (M/F))? ");
	edad = leeDatoEnteroPositivo("Edad del cliente? ");
	tipoHospedaje = leeTipoHospedaje();
	dias = leeDatoEnteroPositivo("Cantidad de días? ");
	// Proceso
	precioDia = obtenerPrecioDia(tipoHospedaje);
	porcDcto1 = obtenerPorcDcto1(tipoHospedaje, dias);
	porcDcto2 = obtenerPorcDcto2(sexo, edad);
	importeBruto = precioDia * dias;
	descuento1 = importeBruto * porcDcto1;
	descuento2 = importeBruto * porcDcto2;
	importeNeto = importeBruto - descuento1 - descuento2;
	// Indicadores
	contClieMasculinoDcto2 += (sexo=='M' && porcDcto2>0)?1:0;
	// Reporte de la venta
	cout << endl;
	cout << "RESULTADO DE LA VENTA" << endl;
	cout << "===============================" << endl;
	cout << "Precio por día: " << precioDia << endl;
	cout << "Importe bruto: " << importeBruto << endl;
	cout << "Descuento 1: " << descuento1 << endl;
	cout << "Descuento 2: " << descuento2 << endl;
	cout << "Importe neto: " << importeNeto << endl;
}

void reporteVentas(){
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Opción: Reporte de Ventas" << endl;
	cout << "===============================" << endl;
	cout << "Cantidad total de ventas: " << contVentas << endl;
	cout << "Clientes masculinos con el segundo descuento: " << contClieMasculinoDcto2 << endl;
}
