/*
	ESTUDIANTE: Valdivia Espinoza 
	Flavio Sebastian
	
*/

#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char categoria;
	double importeventa, importepagar, porcdescuento, porcbono;
	double importedescuento, importebono;
	int control;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "CATEGORIA" << endl;
	cout << "A" << endl;
	cout << "B" << endl;
	cout << "C" << endl;
	cout << "D" << endl;
	cout << "E" << endl << endl;
	cout << "Opcion? "; cin >> categoria;
	cout << endl;
	cout << "Venta: "; cin >> importeventa;
	
	// Proceso y reporte
	cout << endl;
	if(importeventa > 0.0){
		control = 1;
		switch(categoria){
			case 'A': case 'a':
				porcdescuento = 0.05, porcbono = 0.10; 
				break;
			case 'B': case 'b':
				porcdescuento = 0.07, porcbono = 0.15; 
				break;
		    case 'C': case 'c':
				porcdescuento = 0.09, porcbono = 0.20; 
				break;
			case 'D': case 'd':
				porcdescuento = 0.11, porcbono = 0.25; 
				break;
			case 'E': case 'e':
				porcdescuento = 0.14, porcbono = 0.30; 
				break;
			default:
				porcdescuento = 0.00, porcbono = 0.00; 
				control = 0;											
		}
		if( control == 0){
			cout << "Error en la categoria." << endl;
		} else {
			importedescuento = importeventa * porcdescuento;
			importepagar = importeventa - importedescuento;
			importebono = importeventa * porcbono; 
			// Reporte
			cout << "Descuento: " << importedescuento << endl;
			cout << "Bono para el proximo viaje: " << importebono << endl;
			cout << "Debes pagar: " << importepagar << endl;
		}
	} else {
		cout << "La venta debe ser mayor que cero." << endl;
	}
	cout << endl;
	
	
	// Fin
	system("pause");
	return 0;
}
