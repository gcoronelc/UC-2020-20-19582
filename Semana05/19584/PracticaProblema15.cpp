#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n;
	double peso, contPersonasConSobrepedo, contPersonasSinSobrepeso;
	
	// Lectura de datos y Proceso
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	cout << "Valor para \"n\": "; cin >> n;
	contPersonasConSobrepedo = 0;
	contPersonasSinSobrepeso = 0;
	for(int i=1; i<=n; i++){
		// Lectura
		cout << "Ingrese peso " << i << ": ";
		cin >> peso;
		// Proceso
		if(peso >= 80){
			contPersonasConSobrepedo++;
		} else {
			contPersonasSinSobrepeso++;
		}
	}
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;	
	cout << "Personas con sobrepeso: " << contPersonasConSobrepedo << endl;
	cout << "Personas sin sobrepeso: " << contPersonasSinSobrepeso << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
