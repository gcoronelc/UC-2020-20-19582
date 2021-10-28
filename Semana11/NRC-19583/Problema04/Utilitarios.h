#include<iostream>
using namespace std;

void procMostrarMenu(){
	system("cls");
	cout << endl;
	cout << "SISTEMA DE PLANILLAS" << endl;
	cout << "Cálculo del sueldo" << endl;
	cout << "==================================" << endl;
	cout << "1.- Registrar empleado" << endl;
	cout << "2.- Listado de empleados" << endl;
	cout << "3.- Reporte estadístico" << endl;
	cout << "4.- Salir" << endl;
	cout << "----------------------------------" << endl;
	cout << endl;
}

char leeCategoria(){
	char categoria;
	do{
		cout << "Categoria (S/C/D/E): ";
		cin  >> categoria;
		categoria = toupper(categoria);
		if(categoria!='S' && categoria!='C' && categoria!='D' && categoria!='E'){
			cout << "ERROR, opción incorrecta." << endl;
		}
	}while(categoria!='S' && categoria!='C' && categoria!='D' && categoria!='E');
	return categoria;
}

double obtenerPorcAumento(char categoria){
	double porcentaje;
	porcentaje = 0;
	porcentaje = (categoria=='S')?20:porcentaje;
	porcentaje = (categoria=='C')?10:porcentaje;
	porcentaje = (categoria=='D')?5:porcentaje;
	return porcentaje;	
}










