#include <iostream>
using namespace std;

// Variables globales
int contPersonas;

// Funciones y procedimientos
void mostrarCabecera();
void inicializaVariables();
char leeDatoSiNo(string etiqueta, string mensaje);
void mostrarReporteFinal();

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	char rpta;
	
	// Cabecera
	mostrarCabecera();
	
	// Control principal
	inicializaVariables();
	do{
		
		contPersonas++;
		cout << "Persona " << contPersonas  << endl;
		cout << endl;
		
		
		rpta = leeDatoSiNo("¿Procesa otra persona (S/N)?","Error en el dato ingresado.");
	} while(rpta=='S');
	
	// Reporte final
	mostrarReporteFinal();
	
	
	// Fin
	system("pause");
	return 0;
}

// Inicializa variables globales
void inicializaVariables(){
	contPersonas = 0;
}

// Muestra el reporte final
void mostrarReporteFinal(){
	cout << endl;
	cout << "Reporte final." << endl;
	cout << endl;
}

// Lee S o N.
// Recibe la etiqueta y el mensaje de error.
char leeDatoSiNo(string etiqueta, string mensaje)
{
	char dato;
	// Proceso: Inicio
	do{
		cout << etiqueta;
		cin  >> dato;
		dato = toupper(dato);
		if(dato != 'S' && dato != 'N')
		{
			cout << mensaje << endl;
		}				
	}while(dato != 'S' && dato != 'N');
	// Proceso: Fin
	return dato;	
}

// Muestra la cabecera del programa
void mostrarCabecera(){
	cout << "CONTROLA TU IMC" << endl;
	cout << "LA SALUD ESTA PRIMERO" << endl;
	cout << endl;
}
