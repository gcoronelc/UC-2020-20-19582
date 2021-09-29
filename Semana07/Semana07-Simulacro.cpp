#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, cantidad;
	double precio, porcComision, importeVenta, importeComision;
	char categoria;
	int contVentas=0, contCateA=0, contCateB=0, contCateC=0;
	
	// Control del menú de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "=================================================" << endl;		
		cout << " SOBRE RUEDAS SAC" << endl;
		cout << " Menú de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas" << endl;
		cout << "3.- Resumen de ventas" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			
			// Procesar venta
			case 1: 
			
				contVentas++;
				cout << " SOBRE RUEDAS SAC" << endl;
				cout << " Venta nro.: " << contVentas << endl;
				cout << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "=====================================" << endl;
				
				// Leer categoria
				do{
					cout << "Categoría (A/B/C)? "; cin >> categoria;
					categoria = toupper(categoria);
					if(categoria!='A' && categoria!='B' && categoria!='C'){
						cout << "ERROR: El valor puede ser A, B ó C." << endl;
					}
				}while(categoria!='A' && categoria!='B' && categoria!='C');
				
				// Leer cantidad
				do{
					cout << "Cantidad? "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: El valor debe ser positivo." << endl;
					}
				}while(cantidad<=0);
				
				// Obtener precio y comision
				switch(categoria){
					case 'A':
						precio = 55.00;
						porcComision = (cantidad>10)?0.06:0.04;
						break;
					case 'B':
						precio = 75.00;
						porcComision = (cantidad>10)?0.10:0.06;
						break;
					case 'C':
						precio = 93.00;
						porcComision = (cantidad>10)?0.15:0.10;
						break;												
				}
				
				// Calculos
				importeVenta = precio * cantidad;
				importeComision = importeVenta * porcComision;
				
				// Contadores
				contCateA = (cantidad>10)?6:4;
				
				
				// Reporte de venta
				cout << endl;
				cout << fixed;
				cout << " SOBRE RUEDAS SAC" << endl;
				cout << " Reporte de venta " << contVentas << endl;
				cout << "=====================================" << endl;
				cout << "Precio por camioneta: " << precio << endl;
				cout << "Importe de venta: " << importeVenta << endl;
				cout << "Porc. de Comisión: " << porcComision << endl;
				cout << "Importe de Comisión: " << importeComision << endl;

				break;
			
			case 2: // Opción 2: bbbbb
				cout << "Proceso opción 2" << endl;
				break;	
			
			// Opción 3: Reporte
			case 3: 
				cout << endl;
				cout << fixed;
				cout << " SOBRE RUEDAS SAC" << endl;
				cout << " Resumen de ventas " << contVentas << endl;
				cout << "=====================================" << endl;
				cout << endl;
				cout << "--------------------------------------------------------------------------" << endl;
				cout << "    A" << "\t" << contCateA << endl;
				cout << "    B" << "\t" << contCateB << endl;
				cout << "    B" << "\t" << contCateC << endl;
				cout << "--------------------------------------------------------------------------" << endl;
				cout << "TOTALES:\t" << contVentas << endl;
				break;					
			
			
			case 4: // Opción 5: Salir
				cout << "Proceso opción 4" << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
