/*
 * Sumar dos n�meros enteros si son positivos (mayor a cero) sino multiplicarlos.
*/
#include<iostream>
using namespace std;

int main( )
{ 	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int a, b;
	int c; 
	
	// Lectura de datos
	cout<<"Ingrese valor de primer n�mero:\t\t"; cin>>a;
	cout<<"Ingrese valor de segundo n�mero:\t";  cin>>b;

	// Proceso y Reporte
	if( a>0 && b>0)
	{
		c = a + b;
		cout<<"La suma es:\t\t\t\t" << c << "\n";
	}
	else // Cuando la condici�n es false
	{
		c = a * b;
		cout<<"La multiplicaci�n es:\t\t\t" << c << "\n";
	}
	
	// Fin
	return 0;
}



