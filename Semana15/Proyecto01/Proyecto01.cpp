#include <iostream>
#include "LecturaDatos19582.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float precio, importe;
	int categoria, cantidad;
	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	categoria = leerOpcion("Categoria (1-5): ",1,5);
	precio = leeDatoFloatPositivo("Precio: ");
	cantidad = leeDatoEnteroPositivo("Cantidad: ");
	
	// Proceso
	importe = precio * cantidad;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;	
	cout << "Precio: " << precio << endl;
	cout << "Cantidad: " << cantidad << endl;
	cout << "Importe: " << importe << endl;
	
	// Fin
	system("pause");
	return 0;
}
