// LUIS ANGEL CONDORI RAMON 12:09
#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int sueld;
	float s_n,s_n1,s_n2,des,des1,des2;	
	
	// Lectura de datos
	cout<<"Ingrese su sueldo \t\t"; cin>>sueld;
	
	// Proceso y Reporte
	if( sueld>=0 && sueld<=1000)
	{
		des=sueld*0.1;
		s_n=sueld-(des);
		cout<<"Descuento: 10% = "<<des<< endl;
		cout<<"Sueldo Neto:"<<s_n<< endl;
	}
	else if( sueld>1000 && sueld<=2000)
	{
		cout<<"Descuento: 15% = "<<des1<< endl;
		des1=sueld*0.15;
		s_n1=sueld-(des1);
		cout<<"Sueldo Neto:"<<s_n1<< endl;
	}
	else if( sueld>2000)
	{
		cout<<"Descuento: 20% = "<<des2<< endl;
		des2=sueld*0.2;
		s_n2=sueld-(des2);
		cout<<"Sueldo Neto:"<<s_n2<< endl;
	}
	else
	{
		cout<<"Ingreso un sueldo incorrecto \n";
	}
	// Fin
	system("pause");
	return 0;
}
