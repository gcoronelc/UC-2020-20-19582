/*
Fase 1: Estructura del programa.
Fase 2: Procesar venta.
*/
#include <iostream>
using namespace std;

// Variables globales
int contVentas;

// Funciones y procedimientos
void procCabecera();
void procVenta();
void procReporteFinal();
void procInicializaVariables();
char leeDatoSiNo(string etiqueta);
int leeEnteroPositivo(string etiqueta, string mensaje);
double leeDoublePositivo(string etiqueta, string mensaje);

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
	// Variables
	string codigo;
	int cantLitros;
	double precioLitro, importeVenta;
	// Incrementar el contador de ventas
	contVentas++;
	// Lectura
	cout << "INGRESO DE DATOS" << endl;
	cout << "Venta Nro. " << contVentas << endl;
	cout << "---------------------------------------" << endl;
	cout << "Código del artículo: "; cin >> codigo;
	cantLitros = leeEnteroPositivo("Ingrese cantidad de litros? ","ERROR, debe ser un valor positivo.");
	precioLitro = leeDoublePositivo("Ingrese precio por litros? ", "ERROR, debe ser un valor positivo.");
	// Proceso
	importeVenta = precioLitro * cantLitros;
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Importe de la venta: " << importeVenta << endl;
	cout << endl;	
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

// Inicializa variables globales
void procInicializaVariables(){
	contVentas = 0;
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

// Lee un entero positivo
int leeEnteroPositivo(string etiqueta, string mensaje)
{
	int dato;	
	do{
		cout << etiqueta; cin >> dato;
		if (dato<= 0){
			cout << mensaje << endl;
		}
	} while (dato<= 0);	
	return dato;	
}

// Lee un double positivo
double leeDoublePositivo(string etiqueta, string mensaje)
{
	double dato;
	// Proceso: inicio
	do{
		cout << etiqueta; cin >> dato;
		if (dato<=0){
			cout << mensaje << endl;
		}
	} while (dato<=0);
	// Proceso: fin	
	return dato;	
}



