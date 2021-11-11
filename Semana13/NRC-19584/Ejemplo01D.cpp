#include <iostream>
#include "LecturaDatos.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, peso;
	
	// Lectura de datos
	edad = leeEnteroPositivo("Edad: ");
	peso = leeEnteroPositivo("Peso: ");
	
	// Reporte
	cout << endl;
	cout << "Edad: " << edad << endl;	
	cout << "Peso: " << peso << endl;	
	
	// Fin
	system("pause");
	return 0;
}


