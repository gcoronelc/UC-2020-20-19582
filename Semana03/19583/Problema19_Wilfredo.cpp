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
	
	//PROCESO
	if( sueldo <= 0){
		reporte << "El sueldo no puede ser negativo.";
	} else {
		if( sueldo<=1000 ){
			porcDescuento =0.1;
		}else if( sueldo<=2000 ){
			porcDescuento = 0.15;
		}else{
			porcDescuento = 0.2;
		}
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
