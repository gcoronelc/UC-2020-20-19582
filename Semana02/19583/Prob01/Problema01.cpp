#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2;
	int suma, resta, producto, cociente, resto;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "========================================" << endl;
	cout << "N�mero 1: "; cin >> numero1;
	cout << "N�mero 2: "; cin >> numero2;
	
	// Proceso
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	producto = numero1 * numero2;
	cociente = numero1 / numero2;
	resto = numero1 % numero2;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "========================================" << endl;
	cout << "Suma: " << suma << endl;	
	cout << "Resta: " << resta << endl;	
	cout << "Producto: " << producto << endl;	
	cout << "Divisi�n: " << cociente << endl;	
	cout << "Resto: " << resto << endl;	
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
