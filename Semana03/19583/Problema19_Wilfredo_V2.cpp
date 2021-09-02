// WILFREDO PAUL LAZARO CARPIO 11:55
#include<iostream>
#include <sstream>
using namespace std;
int main(){
	
	// Variables
	float sueldo, descuento, sueldoNeto, porcDescuento;
	stringstream reporte; // Buffer
	
	// Lectura de datos
	cout<<"Ingresar sueldo: ";cin>>sueldo;
	
	// PROCESO
	if( sueldo <= 0){
		reporte << "El sueldo no puede ser negativo.";
	} else {
		porcDescuento = 0.10; // Punto de partida
		porcDescuento = (sueldo>1000 && sueldo<=2000)?0.15:porcDescuento;
		porcDescuento = (sueldo>2000)?0.20:porcDescuento;
		descuento = sueldo * porcDescuento;
		sueldoNeto = sueldo - descuento;
		reporte << "Descuento: " << descuento << endl;
		reporte << "Sueldo neto: " << sueldoNeto;
	}
	
	// REPORTE
	cout << endl;
	cout << reporte.str() << endl;
	cout << endl;
	 	
	return 0;
}
