#include <iostream>
using namespace std;

// Divión entera
int divisionPorRestas( int a, int b ){
	if(a<=b){
		return 0;
	}
	return divisionPorRestas(a-b,b) + 1;
}

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int num1, num2, division;
	// Lectura de datos
	cout << "Número 1: "; cin >> num1;
	cout << "Número 2: "; cin >> num2;	
	// Proceso
	division = divisionPorRestas(num1, num2);
	// Reporte
	cout << endl;
	cout << "División: " << division << endl;
	// Fin
	system("pause");
	return 0;
}

