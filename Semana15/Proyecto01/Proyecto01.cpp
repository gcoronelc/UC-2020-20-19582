#include <iostream>
#include "ConvierteDatos.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio;
	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	cout << "Precio: ";
	precio = leedatofPositivos();
	
	
	// Proceso
	
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;	
	cout << "Precio: " << precio << endl;
	
	// Fin
	system("pause");
	return 0;
}
