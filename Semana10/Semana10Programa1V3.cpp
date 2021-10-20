#include <iostream>
using namespace std;

float leeFloatPositivo(string etiqueta, string mensaje);
int leeEnteroPositivo(string etiqueta, string mensaje);
void procesarHerencia(float herencia, int hijos);

int main()
{
	// Variables
	float herencia;
	int hijos;
	// Lectura
	herencia = leeFloatPositivo("Ingresar importe de herencia: ", "ERROR. La herencia debe ser mayor a 0.");
	hijos =leeEnteroPositivo("Ingresar cantidad de hijos: ", "ERROR. La cantidad debe ser mayor a 0."); 
	// Proceso
	procesarHerencia(herencia, hijos);
	return 0;
}

void procesarHerencia(float herencia, int hijos){
	float herenciaHijo, herenciaMayor;
	if (hijos<4)
	{	
		herenciaHijo = herencia / hijos;
		cout << "La herencia a cada hijo es: " << herenciaHijo << endl;
	}
	else
	{
		herenciaMayor = herencia / 2;
		herenciaHijo = herenciaMayor / (hijos - 1);
		cout << "\nLa herencia del hermano mayor es: " << herenciaMayor;
		cout << "\nLa herencia de los demas hijos es: " << herenciaHijo;
	}	
}

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


float leeFloatPositivo(string etiqueta, string mensaje)
{
	float dato;
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

