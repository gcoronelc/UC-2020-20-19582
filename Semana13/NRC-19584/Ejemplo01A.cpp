#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, peso;
	
	// Lectura de datos
	cout << "Edad: "; cin >> edad;
	cout << "Peso: "; cin >> peso;
	
	
	// Reporte
	cout << endl;
	cout << "Edad: " << edad << endl;	
	cout << "Peso: " << peso << endl;	
	
	// Fin
	system("pause");
	return 0;
}
