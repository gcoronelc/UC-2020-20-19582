#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, cantidad;
	double precio, porcComision;
	char categoria;
	int contVentas=0;
	
	// Control del men� de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "=================================================" << endl;		
		cout << " SOBRE RUEDAS SAC" << endl;
		cout << " Men� de Opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar venta" << endl;
		cout << "2.- Listado de ventas" << endl;
		cout << "3.- Resumen de ventas" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opci�n del men�
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
					cout << "Categor�a (A/B/C)? "; cin >> categoria;
					categoria = toupper(categoria);
					if(categoria!='A' && categoria!='B' && categoria!='C'){
						cout << "ERROR: El valor puede ser A, B � C." << endl;
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
						comision = (cantidad>10)?0.06:0.04;
						break;
					case 'B':
						precio = 75.00;
						comision = (cantidad>10)?0.10:0.06;
						break;
					case 'C':
						precio = 93.00;
						comision = (cantidad>10)?0.15:0.10;
						break;												
				}
				
				 				
				
				cout << "Proceso opci�n 1" << endl;
				break;
			
			case 2: // Opci�n 2: bbbbb
				cout << "Proceso opci�n 2" << endl;
				break;	
			
			case 3: // Opci�n 3: cccccccc
				cout << "Proceso opci�n 3" << endl;
				break;					
			
			
			case 4: // Opci�n 5: Salir
				cout << "Fin del programa." << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
