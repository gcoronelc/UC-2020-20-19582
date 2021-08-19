// EDUARDO STAYNER ALEJO MEDINA 13:55

#include <iostream>
using namespace std;

int main(){
	
	// Variables
	
	int soles;
	float dolares, cambio;
	// Lectura de datos
	
	cout << "Ingrese el total de soles: "; cin >> soles;
	
	// Proceso
	cambio=4.08;
	dolares = soles / cambio;
	
	// Reporte
	cout << endl;
	cout << "El total de dolares es: " << dolares << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
