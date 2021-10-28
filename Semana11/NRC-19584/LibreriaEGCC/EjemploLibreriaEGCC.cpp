#include <iostream>
#include "LibreriaEGCC.h"
using namespace std;

string obtenerNombre(int op);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int op;
	string nombre;
	
	// Lectura de datos
	cout << "MENU DEL DÍA" << endl;
	cout << "============================" << endl;
	cout << "1. Chicharrones" << endl;
	cout << "2. Escabeche" << endl;
	cout << "3. Caldo de gallina" << endl;
	cout << "4. Pollo con champiñon " << endl;
	cout << endl;
	op = leerOpcion(1,4);
	
	// Proceso
	nombre = obtenerNombre(op);
	
	// Reporte
	cout << endl;
	cout << nombre <<  " en camino." << endl;
	
	
	// Fin
	system("pause");
	return 0;
}

string obtenerNombre(int op){
	string nombre = "";
	nombre = (op==1)?"Chicharrones":nombre;
	nombre = (op==2)?"Escabeche":nombre;
	nombre = (op==3)?"Caldo de gallina":nombre;
	nombre = (op==4)?"Pollo con champiñon":nombre;
	return nombre;
}


