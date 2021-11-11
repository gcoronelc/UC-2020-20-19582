/*
Aplicando LecturaDatos.h
*/
#include <iostream>
#include "LecturaDatos.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad;
	
	// Lectura de datos
	
	//cout << "Edad: "; 
	// cin >> edad;
	// edad = leeDatoEntero();
	 
	 edad = leeDatoEnteroPositivo("Edad: ");
	
	// Proceso
	
	
	// Reporte
	cout << "Hola, tienes " <<  edad << " años." << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
