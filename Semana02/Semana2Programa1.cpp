#include<iostream>
using namespace std;

int main( )
{
	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	float base, altura, area;
	
	// Lectura de Datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================" << endl;
	cout << "Ingrese valor de la base:\t";   cin >> base;
	cout << "Ingrese valor de la altura:\t"; cin >> altura;
	
	// Proceso	
	area = (base * altura) / 2;
	
	// Reporte
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==========================================" << endl;	
	cout << "El �rea del tri�ngulo es:\t" << area << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}


