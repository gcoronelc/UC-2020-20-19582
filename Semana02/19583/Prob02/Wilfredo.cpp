#include<iostream>
using namespace std;
int main(){
	float precio,cantidad,Importe,Impuesto,Total;
	
	cout<<"Ingrese el precio del producto: ";cin>>precio;
	cout<<"Ingrese la cantidad vendida: ";cin>>cantidad;
	
  Total=precio*cantidad;
  Importe=Total/1.18;
	Impuesto=Total-Importe;
	
	cout << endl << endl;
	cout<<"El Importe es: "<<Importe<<endl;
	cout<<"El impuesto es: "<<Impuesto<<endl;
	cout<<"El total es: "<<Total<<endl;
	cout << endl;

	return 0;
}

