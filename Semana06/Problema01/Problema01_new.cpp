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
		cout << "MATEMATICAS PARA TODOS" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Área de un triangulo" << endl;
		cout << "2.- Área de una circunferencia" << endl;
		cout << "3.- Área de un rectángulo" << endl;
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
			
			case 1: // Opción 1: Área de un triangulo
				cout << "Proceso opción 1" << endl;
				break;
			
			case 2: // Opción 2: bbbbb
				cout << "Proceso opción 2" << endl;
				break;	
			
			case 3: // Opción 3: cccccccc
				cout << "Proceso opción 3" << endl;
				break;					
			
			case 4: // Opción 4: Salir
				cout << "Fin del programa" << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
