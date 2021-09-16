#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	const int LIMITE = 3;
	double precio, total, descuento, totalPagar;
	int cont;
	
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "=============================================" << endl;
	cont = LIMITE;
	total = 0.0;
	while(cont>0){
		cout << "Ingrese precio: "; cin >> precio;
		total += precio;
		cont--;
	}
	
	// Proceso
	descuento = 0.0;
	if(total > 200){
		descuento = total * 0.15;
	}
	totalPagar = total - descuento;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "=============================================" << endl;	
	cout << "Total: " << total << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total a oagar: " << totalPagar << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
