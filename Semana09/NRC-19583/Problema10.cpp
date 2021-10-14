#include <iostream>
using namespace std;

void multiplosDeCinco(int cantNumeros, int &cantMultiplos){	
	// Variables locales
	int numero;
	// Proceso
	cantMultiplos = 0;
	cout << endl;
	for(int i=1; i<=cantNumeros; i++){
		cout << "Número " << i << ": ";
		cin  >> numero;
		cantMultiplos += (numero%5 == 0)?1:0;
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int cantNumeros, cantMultiplos;
	
	// Lectura de datos
	cout << "PROBLEMA 10" << endl;
	cout << endl << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "======================================" << endl;
	cout << "Cantidad de números a evaluar? ";
	cin  >> cantNumeros;
	
	// Proceso
	multiplosDeCinco(cantNumeros, cantMultiplos);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "======================================" << endl;	
	cout << "Multipos de cinco: " << cantMultiplos << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
