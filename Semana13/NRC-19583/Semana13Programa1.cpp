#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

void Cacular()
{
	// Variables
	char categ;
	int num1, num2, z;
	// Lectura
	cout<<"Ingrese categoria (A a B b C c): ";
	cin>>categ;
	cout<<"Ingrese num1: ";
	cin>>num1;
	cout<<"Ingrese num2: ";
	cin>>num2;	
	// Proceso
	categ = toupper(categ);
	num1 = abs(num1);
	num2 = abs(num2);
	switch(categ)
	{
		case 'A':{	z = pow(num1,num2);  }break;
		case 'B':{	z = sqrt(num2) + pow(num2,num1); }break;		
		case 'C':{  z = sqrt(num1+num2); }break;
	}
	// Reporte
	cout << "El resultado es: " << z <<endl;
}

int main()
{
	Cacular();
	return 0;
}


