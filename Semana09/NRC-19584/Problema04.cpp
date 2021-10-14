#include <iostream>
using namespace std;

int fnPotencia (int base, int exponente){
	int potencia;
	// Proceso: Inicio
	potencia = 1;
	for(int i=1; i<=exponente; i++){
		potencia *= base;
	}
	// Proceso: Fin
	return potencia;
}

double fnPromedio (int n1, int n2, int n3){
	double promedio;
	// Proceso : Inicio
	promedio = (n1 + n2 + n3)*1.0 / 3;
	// Proceso: Fin	
	return promedio;	
}

int fnMayor(int n1, int n2, int n3){
	int mayor;
	// Proceso : Inicio
	mayor = n1; // Punto de partida
	mayor = (n2>mayor)?n2:mayor;
	mayor = (n3>mayor)?n3:mayor;
	// Proceso: Fin	
	return mayor;
}

int fnMenor(int n1, int n2, int n3){
	int menor;
	// Proceso : Inicio
	menor = n1; // Punto de partida
	menor = (n2<menor)?n2:menor;
	menor = (n3<menor)?n3:menor;
	// Proceso: Fin	
	return menor;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int numero1, numero2, numero3;
	int mayor, menor, potencia;
	double promedio;
	
	// Lectura de datos
	cout << "PROBLEMA 04" << endl << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "======================================" << endl;
	cout << "Número 1: "; cin >> numero1;
	cout << "Número 2: "; cin >> numero2;
	cout << "Número 3: "; cin >> numero3;
	
	// Proceso
	menor = fnMenor(numero1, numero2, numero3);
	mayor = fnMayor(numero1, numero2, numero3);
	promedio = fnPromedio(numero1, numero2, numero3);
	potencia = fnPotencia(numero1, numero2);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "======================================" << endl;	
	cout << "Número menor: " << menor << endl;
	cout << "Número mayor: " << mayor << endl;
	cout << "Promedio: " << promedio << endl;
	cout << "Potencia n1^n2: " << potencia << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
