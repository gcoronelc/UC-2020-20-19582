#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	const int LIMITE = 3;
	double precio, importe, descuento, totalPagar;
	int cont;
	
	// Lectura de datos
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;
	cont = 1;
	importe = 0.0;
	while(cont <= LIMITE){
		cout << "Precio " << cont << ": ";
		cin >> precio;
		importe += precio;
		cont++;
	}
	
	// Proceso
	descuento = 0.0;
	if( importe > 200 ){
		descuento = importe * 0.15;
	}
	totalPagar = importe - descuento;
	
	// Reporte
	cout << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "==================================" << endl;	
	cout << "Importe: " << importe << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Total pagar: " << totalPagar << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
