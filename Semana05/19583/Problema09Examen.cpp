#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double sueldo, importePrestamo, importeBono, importeCobrar;
	double porcPrestamo, porcBono;
	char categoria;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "================================" << endl;
	cout << "Sueldo: "; cin >> sueldo;
	cout << "Categoria del trabajador" << endl;
	cout << "A.- Categoria A" << endl;
	cout << "B.- Categoria B" << endl;
	cout << "C.- Categoria C" << endl;
	cout << "D.- Categoria D" << endl;
	cout << "E.- Categoria C" << endl;
	cout << endl;
	cout << "Ingrese categoría: "; cin >> categoria;
	
	// Validación
	categoria = toupper(categoria);
	cout << endl;
	if(categoria=='A' || categoria=='B' || categoria=='C' || categoria=='D' || categoria=='E'){
		if(sueldo>0){
			// Proceso
			switch(categoria){
				case 'A':
					porcPrestamo = 0.40;
					porcBono = 0.25;
					break;
				case 'B':
					porcPrestamo = 0.50;
					porcBono = 0.35;
					break;					
				case 'C':
					porcPrestamo = 0.60;
					porcBono = 0.50;
					break;					
				case 'D':
					porcPrestamo = 0.80;
					porcBono = 0.60;
					break;					
				case 'E':
					porcPrestamo = 1;
					porcBono = 0.60;
					break;					
			}
			importePrestamo = sueldo * porcPrestamo;
			importeBono = sueldo * porcBono;
			importeCobrar = sueldo + importePrestamo + importeBono;
			// Reporte
			cout << endl;
			cout << "REPORTE" << endl;
			cout << "================================" << endl;	
			cout << "Sueldo: " << sueldo << endl;		
			cout << "Importe del prestamo: " << importePrestamo << endl;		
			cout << "Importe del bono: " << importeBono << endl;		
			cout << "Importe a cobrar: " << importeCobrar << endl;			
		} else {
			cout << "Error, sueldo incorrecto." << endl;
		}
	} else {
		cout << "Error, categoria incorrecta." << endl;
	}
	cout << "Nos vemos en el siguiente procesp, chau." << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
