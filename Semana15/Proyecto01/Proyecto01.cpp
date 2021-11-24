#include <iostream>
#include "LecturaDatos19582.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio;
	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	precio = leeDatoFloat("Precio: ");
	
	
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
