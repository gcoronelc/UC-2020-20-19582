#include<iostream>
#include<string>
using namespace std;

int leedatoe()
{
	int dato;
	cin>> dato;
	return dato;
}

float leedatof()
{
	float dato;
	cin>> dato;
	return dato;
}

double leeDatoDouble()
{
	double dato;
	cin>> dato;
	return dato;
}

double leeDatoDoublePositivo(string etiqueta)
{
	double dato;
	do{
		cout << etiqueta; cin >> dato;
		if(dato <= 0){
			cout << "ERROR: Valor incorrecto." << endl;
		}
	}while(dato <= 0);
	return dato;
}


char leedatoc()
{
	char dato;
	cin>> dato;
	return dato;
}

string leeDatoString()
{
	string dato;
	cin>> dato;
	return dato;
}

string leeDatoString(string etiqueta)
{
	string dato;
	cout << etiqueta;
	cin  >> dato;
	return dato;
}



