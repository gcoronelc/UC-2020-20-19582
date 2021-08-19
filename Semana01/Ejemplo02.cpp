/*
 * Desarrollar un programa
 * para calcular el promedio
 * de un estudiante.
 * Son 3 notas por estudiante.
*/
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	// Los nombres de las variables deben ser autodescriptivas.
	int nota1, nota2, nota3, promedio1;
	double promedio2;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "================================" << endl;
	cout << "Ingrese nota 1: "; cin >> nota1;
	cout << "Ingrese nota 2: "; cin >> nota2;
	cout << "Ingrese nota 3: "; cin >> nota3;
	
	// Proceso
	promedio1 = (nota1 + nota2 + nota3) / 3;
	promedio2 = (nota1 + nota2 + nota3) / 3.0;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "================================" << endl;
	cout << "Promedio 1: " << promedio1 << endl;
	cout << "Promedio 2: " << promedio2 << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
