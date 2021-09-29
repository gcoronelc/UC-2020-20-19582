#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Control del menú de opciones
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
		
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>5){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>5);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			
			case 1: // Opción 1: aaaa
				cout << "Proceso opción 1" << endl;
				break;
			
			case 2: // Opción 2: bbbbb
				cout << "Proceso opción 2" << endl;
				break;	
			
			case 3: // Opción 3: cccccccc
				cout << "Proceso opción 3" << endl;
				break;					
			
			case 4: // Opción 4: dddddddd
				cout << "Proceso opción 4" << endl;
				break;
			
			case 5: // Opción 5: Salir
				cout << "Fin del programa." << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<5);
	
	// Fin
	return 0;
}
