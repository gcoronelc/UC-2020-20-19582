/*
 * Problema 08
 * Autor: Gustavo Coronel
*/
#include <iostream>
#include <sstream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int nroCreditos;
	stringstream reporte; // Buffer
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "====================================================" << endl;
	cout << "Ingrese cantidad de creditos: "; cin >> nroCreditos;
	
	// Proceso
	if( nroCreditos < 0 || nroCreditos > 160 ){
		reporte << "El numero de creditos esta fuera del rango.";
	} else if(nroCreditos < 32){
		reporte << "Año academico: Primer Año.";
	} else if(nroCreditos <= 63){
		reporte << "Año academico: Segundo Año.";
	} else if(nroCreditos <= 95){
		reporte << "Año academico: Tercer Año.";
	} else if(nroCreditos <= 127){
		reporte << "Año academico: Cuarto Año.";
	} else {
		reporte << "Año academico: Quinto Año.";
	}
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "====================================================" << endl;
	cout << reporte.str() << endl;
	cout << endl;	
	
	// Fin
	system("pause");
	return 0;
}
