/*
Fase 1: Estructura del programa
*/
#include <iostream>
using namespace std;

// Funciones y procedimientos
void procCabecera();
void procVenta();
void procReporteFinal();
char leeDatoSiNo(string etiqueta);

int main(){
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	char rpta;
	// Proceso principal
	do{
		procCabecera();
		procVenta();
		rpta = leeDatoSiNo("¿Otra venta (S/N)? ");
	} while(rpta=='S');
	// Reporte final
	procCabecera();
	procReporteFinal();
	// Fin
	system("pause");
	return 0;
}

// Ejecuta el proceso de una venta
void procVenta(){
	cout << "Proceso venta" << endl;
	cout << endl << endl;	
}

// Reporte final
void procReporteFinal(){
	cout << "Reporte final" << endl;
	cout << endl;
}

// Muestra la cabecera
void procCabecera(){
	system("cls");
	cout << "VENTA DE DESINFECTANTES" << endl;
	cout << "============================================" << endl;
	cout << endl;
}

// Lee S o N.
char leeDatoSiNo(string etiqueta)
{
	char dato;
	// Proceso: Inicio
	do{
		cout << etiqueta; cin  >> dato;
		dato = toupper(dato);
		if(dato != 'S' && dato != 'N')
		{
			cout << "ERROR, opción incorrecta." << endl;
		}				
	}while(dato != 'S' && dato != 'N');
	// Proceso: Fin
	return dato;	
}
