#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu; // Representa el periodo
	double ventas, comision, bono, pagoTotal;
	double porcComision, porcBono, meta;
	
	// Control del men� de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "PAGO DE COMISION A VENDEDORES" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Enero - Marzo" << endl;
		cout << "2.- Abril � Junio" << endl;
		cout << "3.- Julio � Setiembre" << endl;
		cout << "4.- Octubre - Diciembre" << endl;
		cout << "5.- Salir" << endl;
		
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Controlando la opci�n Salir
		if( opMenu == 5 ){
			cout << "Fin del programa." << endl;
			break; // Sale del bucle del men�
		}
		
		// Leer las ventas
		cout << endl;
		do{
			cout << "Valor de las ventas? "; cin >> ventas;
			if(ventas <= 0 ){
				cout << "ERROR, debe ser un valor positivo." << endl;
			}
		}while(ventas <= 0);
		
		
		// Procesar opci�n del men�
		//system("cls");
		switch(opMenu){
			
			case 1: // Opci�n 1: Enero - Marzo
				meta = 80000;			
				porcComision = 0.10;
				porcBono = 0.03;
				break;
			
			case 2: // Opci�n 2: Abril � Junio
				meta = 50000;
				porcComision = 0.12;
				porcBono = 0.05;
				break;	
			
			case 3: // Opci�n 3: Julio � Setiembre
				meta = 70000;
				porcComision = 0.15;
				porcBono = 0.07;
				break;					
			
			case 4: // Opci�n 4: Octubre - Diciembre
				meta = 100000;
				porcComision = 0.16;
				porcBono = 0.08;
				break;			
				
		} // Fin switch
		
		// Calculos
		comision = meta * (ventas>=meta?porcComision:0.0);
		bono = (ventas-meta) * (ventas>meta?porcBono:-0.0);
		pagoTotal = comision + bono;
		
		// Reporte
		cout << endl;
		cout << "REPORTE PAGO A VENDEDOR" << endl;
		cout << "=================================================" << endl;
		cout << "Comisi�n: " << comision << endl;
		cout << "Bono: " << bono << endl;
		cout << "Pago total: " << pagoTotal << endl;
		cout << endl;
		
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
