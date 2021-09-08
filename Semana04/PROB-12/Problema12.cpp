#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char categoria;
	double sueldo, nuevoSueldo;
	double porcIncremento, incremtno;
	int control;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "CATEGORIA" << endl;
	cout << "S.- Sindicalizado" << endl;
	cout << "C.- Cargo de confianza" << endl;
	cout << "D.- Directivo" << endl;
	cout << "E.- Ejecutivo" << endl << endl;
	cout << "Opcion? "; cin >> categoria;
	cout << endl;
	cout << "Sueldo: "; cin >> sueldo;
	
	// Proceso y Reporte
	cout << endl;
	if(sueldo > 0.0){
		control = 1;
		switch(categoria){
			case 'S': case 's':
				porcIncremento = 0.20; 
				break;
			case 'C': case 'c':
				porcIncremento = 0.10;
				break;
			case 'D': case 'd':
				porcIncremento = 0.05;
				break;
			case 'E': case 'e':
				porcIncremento = 0.00;
				break;
			default:
				porcIncremento = 0.00;
				control = 0;											
		}
		if( control == 0){
			cout << "Error en la categoria." << endl;
		} else {
			incremtno = sueldo * porcIncremento;
			nuevoSueldo = sueldo + incremtno;
			// Reporte
			cout << "Incremento: " << incremtno << endl;
			cout << "Nuevo sueldo: " << nuevoSueldo << endl;
		}
	} else {
		cout << "El sueldo debe ser mayor que cero." << endl;
	}
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
