#include <iostream>
using namespace std;

int leeEntero(string etiqueta){
	string sDato;
	int dato, valido = 0;
	do{
		cout << etiqueta; cin >> sDato;
		if(isalpha(sDato[0])){
			cout << "Error, ingrese un número entero." << endl;
			continue;
		}
		dato = stoi( sDato );
		valido=1;		
	} while(valido==0);
	return dato;
}

int leeEnteroPositivo(string etiqueta){
	int dato;
	do{
		dato = leeEntero(etiqueta);
		if(dato <= 0){
			cout << "ERROR, ingrese un valor positivo" << endl;
		}
	}while(dato <= 0);
	return dato;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int edad, peso;
	
	// Lectura de datos
	edad = leeEnteroPositivo( "Edad: ");
	peso = leeEnteroPositivo( "Peso: ");
	
	// Proceso
	
	
	// Reporte
	cout << endl;
	cout << "Edad: " << edad << endl;
	cout << "Peso: " << peso << endl;
	
	// Fin
	system("pause");
	return 0;
}
