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
		cout << "MATEMATICAS PARA TODOS" << endl;
		cout << "=================================================" << endl;
		cout << "1.- �rea de un triangulo" << endl;
		cout << "2.- �rea de una circunferencia" << endl;
		cout << "3.- �rea de un rect�ngulo" << endl;
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
			
			case 1: // Opci�n 1: �rea de un triangulo
				cout << "Proceso opci�n 1" << endl;
				break;
			
			case 2: // Opci�n 2: bbbbb
				cout << "Proceso opci�n 2" << endl;
				break;	
			
			case 3: // Opci�n 3: cccccccc
				cout << "Proceso opci�n 3" << endl;
				break;					
			
			case 4: // Opci�n 4: Salir
				cout << "Fin del programa" << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
