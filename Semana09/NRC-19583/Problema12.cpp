#include <iostream>
using namespace std;

double calcularDescuento(char tipoProducto, double precio){
	double descuento;
	// Proceso: Inicio
	tipoProducto = toupper(tipoProducto);
	descuento = 0.0;
	switch(tipoProducto){
		case 'A':
			descuento = precio * 0.08;
			break;
		case 'B':
			descuento = precio * 0.10;
			break;
		case 'C':
			descuento = precio * 0.11;
			break;	
		case 'D':
			descuento = precio * 0.15;
			break;								
	}
	// Proceso: Fin
	return descuento;
}

void procesarVentas(int cantVentas, double &totalBruto, double &totalDescuento, double &totalNeto){
	// Variables locales
	double precio, importe, descuento, neto;
	int cantidad;
	char tipoProducto;
	// Inicializar variables
	totalBruto = 0;
	totalDescuento = 0;
	totalNeto = 0;
	// Proceso
	cout << endl;
	cout << "INICIO DEL PROCESO" << endl;
	for(int i=1; i<=cantVentas; i++){
		// Lectura de la venta
		cout << endl;
		cout << "Venta " << i << endl << endl;
		cout << "Tipo de producto (A|B|C|D): "; cin >> tipoProducto;
		cout << "Precio: "; cin >> precio;
		cout << "Cantidad: "; cin >> cantidad;
		// Proceso de la venta
		importe = cantidad * precio ;
		descuento = cantidad * calcularDescuento(tipoProducto, precio);
		neto = importe - descuento;
		// Reporte de la venta
		cout << endl;
		cout << "Importe: " << importe << endl;
		cout << "Descuento: " << descuento << endl;
		cout << "Neto: " << neto << endl;
		// Acumuladores
		totalBruto += importe;
		totalDescuento += descuento;
		totalNeto += neto;
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int cantVentas;
	double totalBruto, totalDescuento, totalNeto;
	
	// Lectura de datos
	cout << "PROBLEMA 10" << endl;
	cout << endl << endl;
	cout << "LECTURA DE DATOS" << endl;
	cout << "======================================" << endl;
	cout << "Cantidad de ventas? ";
	cin  >> cantVentas;
	
	// Proceso
	procesarVentas(cantVentas, totalBruto, totalDescuento, totalNeto);
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "======================================" << endl;	
	cout << "Total bruto: " << totalBruto << endl;
	cout << "Total descuento: " << totalDescuento << endl;
	cout << "Total neto: " << totalNeto << endl;
	cout << endl;	
	
	// Fin
	system("pause");
	return 0;
}
