#include<iostream>
#include<string>
using namespace std;

/*
 * Lee un dato de tipo int
*/
int leeDatoEntero()
{
	int dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo int
*/
int leeDatoEntero(string etiqueta)
{
	int dato;
	cout << etiqueta; cin >> dato;
	return dato;
}

/*
 * Lee un dato de tipo int positivo
*/
int leeDatoEnteroPositivo(string etiqueta)
{
	int dato;
	do{
		cout << etiqueta; cin>> dato;
		if( dato <= 0 ){
			cout << "ERROR, valor incorrecto." << endl;
		}
	} while( dato <= 0 );
	return dato;
}

/*
 * Lee un dato de tipo float.
*/
float leeDatoFloat()
{
	float dato;
	cin >> dato;
	return dato;
}

/*
 * Lee un dato de tipo float.
 * Tiene un parámetro para la etiqueta.
*/
float leeDatoFloat(string etiqueta)
{
	float dato;
	string cadIngreso;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if(isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
		}
	}while(isalpha(cadIngreso[0]));
	dato = atof(cadIngreso.c_str());	
	return dato;
}

/*
 * Lee un dato de tipo float positivo.
 * Tiene un parámetro para la etiqueta.
*/
float leeDatoFloatPositivo(string etiqueta)
{
	float dato;
	string cadIngreso;
	dato = -1;
	do{
		cout << etiqueta; cin >> cadIngreso;
		if(isalpha(cadIngreso[0])){
			cout << "Error, debe ingresar un número." << endl;
			continue;
		}
		dato = atof(cadIngreso.c_str());	
		if(dato<=0){
			cout << "Error, debe ingresar un número positivo." << endl;
		}
	}while(dato<=0);
	return dato;
}



/*
 * Lee un dato de tipo double
*/
double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

/*
 * Lee un dato de tipo double positivo.
 * Mayor que cero.
*/
double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin>> dato;
		if( dato <= 0 ){
			cout << "ERROR, valor incorrecto." << endl;
		}
	} while( dato <= 0 );
	return dato;
}


char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString()
{
	string dato;
	cin>> dato;
	return dato;
}

/*
 * Lee una cadena
*/
string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta;
	cin  >> dato;
	return dato;
}

/*
Nuevas funciones con CORONEL.
*/

int leeEntero(string etiqueta){
	// Variables
	int dato;
	string strDato;
	bool datoCorrecto = false; 
	// Proceso
	do{
		cout << etiqueta; cin >> strDato;
		if( isalpha(strDato[0]) ){
			cout << "Error, ingrese un número." << endl;
			continue;
		}
		dato = stoi( strDato );
		datoCorrecto = true;
	} while(!datoCorrecto);
	// Reporte
	return dato;
}

int leeEnteroPositivo(string etiqueta){
	// Variables
	int dato;
	// Proceso
	do{
		dato = leeEntero(etiqueta);
		if(dato<=0){
			cout << "Error, ingrese un valor positivo." << endl;
		}
	} while(dato<=0);
	// Reporte
	return dato;
}



