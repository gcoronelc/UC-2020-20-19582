// PIERO ARMANDO RODRIGUEZ MARTINEZ13:35
#include <iostream>
#include <math.h>
using namespace std;

int main( )
{
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double PF, C1, C2 ,EP, EF;
	string condicion;
	
	// Lectura de datos
	
	cout<<"Ingrese la nota del primer consolidado: ";
	cin>>C1;
	cout<<"\n";
	
	cout<<"Ingrese la nota del examen parcial: ";
	cin>>EP;
	cout<<"\n";
	
	cout<<"Ingrese la nota del segundo consolidado: ";
	cin>>C2;
	cout<<"\n";
	
	cout<<"Ingrese la nota del examen final: ";
	cin>>EF;
	cout<<"\n";
	
	// Proceso
	PF=C1*0.2+EP*0.25+C2*0.2+EF*0.35;
	condicion = (PF>=14)?"Aprobado":"Desaprobado";
	
	// Reporte
	cout << endl << endl;
	cout<<"El promedio final es: " << PF << endl;
	cout<<"Condición: " << condicion << endl;
	cout << endl;
	
	return 0;
}
