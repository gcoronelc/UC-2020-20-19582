/*
 * Problema 20
 * Autor: Gustavo Coronel
*/
#include <iostream>
#include <sstream> 
#include <math.h>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double a, b, c;
	double d, x1, x2;
	stringstream reporte; // Buffer	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=============================================" << endl;
	cout << "Valor de A: "; cin >> a;
	cout << "Valor de B: "; cin >> b;
	cout << "Valor de C: "; cin >> c;
	
	// Proceso
	d = pow(b,2) - 4*a*c;
	if( d < 0 ){
		reporte << "No existen raices reales." << endl;
	} else {
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
		reporte << "Raiz 1 (x1): " << x1 << endl; 
		reporte << "Raiz 2 (x2): " << x2 << endl; 
	}	
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=============================================" << endl;
	cout << reporte.str() << endl;
	
	// Fin
	system("pause");
	return 0;
}
