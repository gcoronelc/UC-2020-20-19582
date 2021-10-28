#include <iostream>
#include "Utilitarios.h";
#include "LibreriaEGCC.h";
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu;
	
	// Proceso principal
	do{
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		
		cout << "op = " << opMenu << endl;
		system("pause");
	} while(opMenu!=4);

	
	// Fin
	system("pause");
	return 0;
}
