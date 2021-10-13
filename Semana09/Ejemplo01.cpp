#include <iostream>
using namespace std;

int sumar(int num1, int num2){
	int suma;
	// Proceso: Inicio
	suma = num1 + num2;
	// Proceso: Fin
	return suma; // Retorna la suma
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	cout << "7 + 5 = " << sumar(7,5) << endl;
	cout << "17 + 15 = " << sumar(17,15) << endl;
	
	// Fin
	system("pause");
	return 0;
}
