#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del men� de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << " << nombre descriptivo>> " << endl;
		cout << "=================================================" << endl;
		cout << "1.- Opcion 1" << endl;
		cout << "2.- Opcion 1" << endl;
		cout << "3.- Opcion 1" << endl;
		cout << "4.- Opcion 1" << endl;
		cout << "5.- Salir" << endl;
		
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			
			case 1: // Opci�n 1: aaaa
				cout << "Proceso opci�n 1" << endl;
				break;
			
			case 2: // Opci�n 2: bbbbb
				cout << "Proceso opci�n 2" << endl;
				break;	
			
			case 3: // Opci�n 3: cccccccc
				cout << "Proceso opci�n 3" << endl;
				break;					
			
			case 4: // Opci�n 4: dddddddd
				cout << "Proceso opci�n 4" << endl;
				break;
			
			case 5: // Opci�n 5: Salir
				cout << "Fin del programa." << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
