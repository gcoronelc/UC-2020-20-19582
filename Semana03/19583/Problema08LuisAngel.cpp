/*
 * Creditos.
*/
#include<iostream>
using namespace std;
int main( )
{ 	
	// Configuraci�n
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int Credt;	
	// Lectura de datos
	cout<<"Ingrese el n�emro de creditos\t\t"; cin>>Credt;
	// Proceso y Reporte
	if( Credt<32)
	{
		cout<<"El alumno se encuentra en el PRIMER A�O";
	}
	else if( Credt>=32 && Credt<=63)
	{
		cout<<"El alumno se encuentra en el SEGUNDO A�O";
	}
	else if( Credt>=64 && Credt<=95)
	{
		cout<<"El alumno se encuentra en el TERCER A�O";
	}
	else if( Credt>=96 && Credt<=127)
	{
		cout<<"El alumno se encuentra en el CUARTO A�O";
	}
	else if( Credt>=128)
	{
		cout<<"El alumno se encuentra en el QUINTO A�O";
	}
	else
	{
		cout<<"Ingreso un n�mero de creditos incorrecto";
	}
	// Fin
	return 0;
}
