#include <iostream>
#include "LecturaDatos19582.h"
using namespace std;

void mostrarMenu(){
	system("cls");
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Menú de opciones" << endl;
	cout << "===============================" << endl;
	cout << "1.- Procesar venta" << endl;
	cout << "2.- Reporte de ventas" << endl;
	cout << "3.- Salir" << endl;
	cout << "===============================" << endl;
}

void salir(){
	cout << "===============================" << endl;
	cout << "SISTEMAS DE VENTAS" << endl;
	cout << "Opción: Salir" << endl;
	cout << "===============================" << endl;	
	cout << "Gracias por su visita." << endl;
	cout << "Que tenga una feliz navidad." << endl;
	cout << "Lo esperamos pronto." << endl;
}


int leeTipoHospedaje(){
	int op;
	cout << "Tipo de Hospedaje" << endl;
	cout << "   1.- Imperial" << endl;
	cout << "   2.- VIP" << endl;
	cout << "   3.- Gold" << endl;
	op = leerOpcion("Opción? ",1,3);
	return op;
}

float obtenerPrecioDia(int tipoHospedaje){
	float precio = 0.0;
	precio = (tipoHospedaje==1)?180:precio;
	precio = (tipoHospedaje==2)?290:precio;
	precio = (tipoHospedaje==3)?370:precio;
	return precio;	
}

float obtenerPorcDcto1(int tipoHospedaje, int dias){
	float porcDcto = 0.0;
	porcDcto = (tipoHospedaje==1 && dias>=5 && dias<=12)?0.06:porcDcto;
	porcDcto = (tipoHospedaje==1 && dias>12)?0.10:porcDcto;
	porcDcto = (tipoHospedaje==2 && dias>=5 && dias<=12)?0.09:porcDcto;
	porcDcto = (tipoHospedaje==2 && dias>12)?0.12:porcDcto;
	porcDcto = (tipoHospedaje==3 && dias>=5 && dias<=12)?0.11:porcDcto;
	porcDcto = (tipoHospedaje==3 && dias>12)?0.15:porcDcto;
	return porcDcto;
}

float obtenerPorcDcto2(char sexo, int edad){
	float porcDcto = 0.0;
	porcDcto = (sexo=='M' && edad>55)?0.04:porcDcto;
	porcDcto = (sexo=='F' && edad>55)?0.06:porcDcto;
	return porcDcto;
}



