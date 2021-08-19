#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	// Se recomienda usar nombres de variables autodescriptivas.
	int base, altura, area;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==============================================" << endl;
	cout << "Inbrese base: "; cin >> base;
	cout << "Inbrese altura: "; cin >> altura;
	
	// Proceso
	area = base * altura;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==============================================" << endl;	
	cout << "Area del rectangulo: " << area << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
