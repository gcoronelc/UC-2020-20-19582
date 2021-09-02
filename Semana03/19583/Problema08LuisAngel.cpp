/*
 * Creditos.
*/
#include<iostream>
using namespace std;
int main( )
{ 	
	// Configuración
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int Credt;	
	// Lectura de datos
	cout<<"Ingrese el núemro de creditos\t\t"; cin>>Credt;
	// Proceso y Reporte
	if( Credt<32)
	{
		cout<<"El alumno se encuentra en el PRIMER AÑO";
	}
	else if( Credt>=32 && Credt<=63)
	{
		cout<<"El alumno se encuentra en el SEGUNDO AÑO";
	}
	else if( Credt>=64 && Credt<=95)
	{
		cout<<"El alumno se encuentra en el TERCER AÑO";
	}
	else if( Credt>=96 && Credt<=127)
	{
		cout<<"El alumno se encuentra en el CUARTO AÑO";
	}
	else if( Credt>=128)
	{
		cout<<"El alumno se encuentra en el QUINTO AÑO";
	}
	else
	{
		cout<<"Ingreso un número de creditos incorrecto";
	}
	// Fin
	return 0;
}
