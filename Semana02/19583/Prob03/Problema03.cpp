// WILFREDO PAUL LAZARO CARPIO12:09
// Ejercicio 3  
#include<iostream>
using namespace std;
int main(){
	
	float sueldo,importe,comision,sueldoNeto;
	cout<<"Ingrese su sueldo: ";cin>>sueldo;
	cout<<"Ingrese el importe de sus ventas: ";cin>>importe;
	
	comision=0.08*importe;
	sueldoNeto=sueldo+comision;
	
	cout<<"Su comision es: "<<comision<<endl;
	cout<<"Su sueldo Neto es: "<<sueldoNeto<<endl;


	return 0;
}

