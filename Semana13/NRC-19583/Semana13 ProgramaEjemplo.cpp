#include <iostream>
#include<string>    
#include<stdlib.h>  // para funciones de conversion atoi,atof   
#include "LecturaDatos.h"
using namespace std;

char repeticion()
{

	char letra;
	char rpta;
	
	do
	{
		cout << "Desea continuar? (S/N):\t\t\t";
		letra = leedatoc();
		if (isalpha(letra))
		{
			rpta = toupper(letra);
			if (rpta != 'S' && rpta != 'N')
				cout << "Error! Ingrese solo S o N. Vuelva a Ingresar." << "\n\n";
		}
		else
		{
			cout << "Solo debe ingresar letras." << "\n\n";
			rpta = 'T';
		}

	} while (rpta != 'S' && rpta != 'N');

	cout << "\n";

	return rpta;

}

double ventas()
{
	int cantart;
	double precio, dcto, MontBruto, montdsct, montofinal;
	string CadenaIngresada;  // usando tipo de dato string

	do{
		cout << "ingresar el precio de articulo: \t";
		CadenaIngresada = leedatos();
		
		if (isalpha(CadenaIngresada[0]))
		{
			precio = -5;  // valor cualquiera
			cout << "\t\t ERROR. Es letra.\n";
		}
		else
		{
			precio = atof(CadenaIngresada.c_str()); 
            // usando string...permite convertir con la funcion c_str()

			if (precio <= 0)
				cout << "\t\t ERROR. Tiene que ser un numero positivo.\n";
		}

	} while (precio <= 0);


	do{
		cout << "Ingresar la cantidad de articulos: \t";
		CadenaIngresada = leedatos();

		if (isalpha(CadenaIngresada[0]))
		{
			cantart = -5;  // valor cualquiera
			cout << "\t\t ERROR. Es letra.\n";
		}
		else
		{
			cantart = atoi(CadenaIngresada.c_str()); 
// usando string...permite convertir con la funcion c_str()

			if (cantart <= 0)
				cout << "\t\t ERROR. Tiene que ser un numero positivo.\n";
		}

	} while (cantart <= 0);


	if (cantart>100)
	{
		dcto = 0.4;
	}
	else
		if (cantart >= 25 && cantart <= 100)
		{
			dcto = 0.2;
		}
		else
			if (cantart >= 10 && cantart <= 25)
			{
				dcto = 0.1;
			}
			else
				if (cantart < 10)
				{
					dcto = 0.0;
					cout << "\n\n";
					cout << " \t\t\t No tiene descuento.";
					cout << "\n\n";
				}

	MontBruto = precio *cantart;
	montdsct = MontBruto*dcto;
	montofinal = MontBruto - montdsct;

	cout << "\n\n";

	cout << "Monto sin descuento es:\t\t\t" << MontBruto;
	cout << "\n\n";
	cout << "Monto de descuento es:\t\t\t" << montdsct;
	cout << "\n\n";
	cout << "Monto a pagar es:\t\t\t" << montofinal;
	cout << "\n\n";

	return montofinal;
}

int main()
{
	char rpta;
	int cont = 0;
	double Totalvendido = 0;
	double montofinal;


	do{
		montofinal = ventas();
		cont++;             // contador de ventas
		Totalvendido = Totalvendido + montofinal;   // acumulador de ventas
		rpta = repeticion();

	} while (rpta == 'S');

	cout << "\n\n";

	cout << "Acumulador de Venta es:\t\t\t" << Totalvendido;
	cout << "\n";

	cout << "Contador de Ventas es:\t\t\t" << cont;
	cout << "\n";
	cout << "\n\n";

	return 0;
	system("pause");
}

