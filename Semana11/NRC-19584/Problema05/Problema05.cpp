#include <iostream>
#include "LibreriaEGCC.h"
#include "Utilitarios.h"
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	int opMenu;
	// Proceso principal
	do{
		mostrarCabecera();
		procMostrarMenu();
		opMenu = leerOpcion(1,4);
		
		cout << "OP = " << opMenu << endl;
		// Fin
		if(opMenu!=4){
			system("pause");
		}
	} while(opMenu!=4);
	// Fin
	system("pause");
	return 0;
}




