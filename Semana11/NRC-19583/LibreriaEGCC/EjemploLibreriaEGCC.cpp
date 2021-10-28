#include <iostream>
#include "LibreriaEGCC.h"
using namespace std;

string obtenerProducto(int op);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	string producto;
	
	// Lectura de datos
	cout << "MENU DEL DÍA" << endl;
	cout << "============================" << endl;
	cout << "1. Chicharrones" << endl;
	cout << "2. Escabeche" << endl;
	cout << "3. Caldo de gallina" << endl;
	cout << endl;
	op = leerOpcion(1,3);
	
	// Proceso
	producto = obtenerProducto(op);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================" << endl;	
	cout << producto << " en camino." << endl;
	
	// Fin
	system("pause");
	return 0;
}

string obtenerProducto(int op){
	string nombre;
	// Proceso: Inicio
	nombre = "En construccion";
	nombre = (op==1)?"Chicharrones":nombre;
	nombre = (op==2)?"Escabeche":nombre;
	nombre = (op==3)?"Caldo de gallina":nombre;
	// Proceso: Fin
	return nombre;
}

