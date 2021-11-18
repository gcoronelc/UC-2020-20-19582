#include <iostream>
using namespace std;

int fnMultiplicarRusa(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	if(b==1){
		return a;
	}
	if( b%2 == 0 ){
		return fnMultiplicarRusa(a*2,b/2) + 0;
	} else {
		return fnMultiplicarRusa(a*2,b/2) + a;
	}
}

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int num1, num2, producto;
	// Lectura de datos
	cout << "Número 1: "; cin >> num1;
	cout << "Número 2: "; cin >> num2;
	// Proceso
	producto = fnMultiplicarRusa(num1, num2);
	// Reporte
	cout << endl;
	cout << "Producto: " << producto << endl;
	// Fin
	system("pause");
	return 0;
}
