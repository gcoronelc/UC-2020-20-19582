#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char categoria;
	double Descuento, Bono;
	double ImporteDescuento, ImporteVenta, ImportePagar, ImporteBono;
	int control;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================" << endl;
	cout << endl;
	cout << "CATEGORIA" << endl;
	cout << "A" << endl;
	cout << "B" << endl;
	cout << "C" << endl;
	cout << "D" << endl;
	cout << "E" << endl << endl;
	cout << "Opcion? "; cin >> categoria;
	cout << endl;
	cout << "Importe Venta: "; cin >> ImporteVenta;
	
	// Proceso y Reporte
	cout << endl;
	if(ImporteVenta > 0.0){
		control = 1;
		switch(categoria){
			case 'A': case 'a':
				Descuento = 0.05;
				Bono = 0.10;
				break;
			case 'B': case 'b':
				Descuento = 0.07;
				Bono = 0.15;
				break;
			case 'C': case 'c':
				Descuento = 0.09;
				Bono = 0.20;
				break;
			case 'D': case 'd':
				Descuento = 0.11;
				Bono = 0.25;
				break;
			case 'E': case 'e':
				Descuento = 0.14;
				Bono = 0.30;
				break;
			default:
				Descuento = 0.00;
				control = 0;											
		}
		if( control == 0){
			cout << "Error en la categoria." << endl;
		} else {
			ImporteDescuento = ImporteVenta * Descuento;
			ImportePagar = ImporteVenta - ImporteDescuento;
			ImporteBono = ImporteVenta * Bono;
			// Reporte
			cout << "Descuento de: " << ImporteDescuento << endl;
			cout << "Total a pagar: " << ImportePagar << endl;
			cout << "Nuevo Bono de: " << ImporteBono << endl;
		}
	} else {
		cout << "El importe de venta debe ser mayor que cero." << endl;
	}
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
