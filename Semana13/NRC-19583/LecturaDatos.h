#include<iostream>
#include<string>
using namespace std;

/*
 * Lee un dato de tipo int
*/
int leeDatoEntero()
{
	int dato;
	cin >> dato;
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
 * El numero ingresado debe ser mayor que cero.
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

float leedatof()
{
	float dato;
	cin>> dato;
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


// NUEVAS FUNCIONES

/*
Función que permite leer un entero validado.
*/
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

/*
Función que permite leer un entero positivo validado.
*/
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


