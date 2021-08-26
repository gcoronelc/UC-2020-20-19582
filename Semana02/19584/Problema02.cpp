#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	double precio, importe, impuesto, total;
	int cantidad;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	cout << "Precio: "; cin >> precio;
	cout << "Cantidad: "; cin >> cantidad;
	
	// Proceso
	total = precio * cantidad;
	importe = total / 1.18;
	impuesto = total - importe;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "==================================" << endl;
	cout << "Importe: " << importe << endl;
	cout << "Impuesto: " << impuesto << endl;
	cout << "Total: " << total << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
