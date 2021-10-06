/*
GRUPO: 20
INTEGRANTES:
  - Gustavo Coronel Castillo
  - FERNANDO ALEJANDRO CAJAHUANCA CAMPOS
  - JHELYN MERLY RAMOS CARBAJAL
  - LUIS ANGEL CONDORI RAMON
  - JOSUE JHEMY GONZALES CCENTE
  - GERSON PAOLO MAYHUA QUISPE
  - SARAIT MITZURI QUISPE VILLALOBOS
  - WILFREDO PAUL LAZARO CARPIO
  - HEIDY MILAGROS FERNANDEZ CANO
  - FERNANDO ALEJANDRO CAJAHUANCA CAMPOS
	- JUNIOR JHORDAN CORDOVA ROSALES
	- ANTHONY EDUARDO CUNYAS LEON
	- CAMILA ALEJANDRA TRAVERSO CASTILLO
	- CHRISTINA NINET ALEJO HUAMAN
	- FLAVIO SEBASTIAN VALDIVIA ESPINOZA
	- JHONNATAN LUIS DANIEL VILCA CONTRERAS
	- ANDONY TIERRY PAUCAR OCHOA
	- JOSUE JHEMY GONZALES CCENTE
*/

#include <iostream>
using namespace std;

void mostrarCabecera(){
	cout << "LA CASA DEL INKA" << endl;
	cout << "SISTEMA DE VENTAS" << endl;
	cout << endl;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int opMenu, edad, tipoPlato, cantidad, precio;
	char sexo;
	double porcDcto1, porcDcto2;
	double importeBruto, dcto1, dcto2, importeNeto;
	string unidad;
	
	// Control del menú de opciones
	do{
		system("cls");
		mostrarCabecera();
		// EL MENU
		cout << "=================================================" << endl;
		cout << "Menú de opciones" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Procesar Venta" << endl;
		cout << "2.- Listado de Ventas" << endl;
		cout << "3.- Resumen de Ventas" << endl;
		cout << "4.- Salir" << endl;
		// Leer opción
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opción incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opción del menú
		system("cls");
		switch(opMenu){
			
			// Opción 1: Procesar venta
			case 1:
				mostrarCabecera();
				// Lectura de datos
				cout << "LECTURA DE DATOS" << endl << endl;
				cout << "----------------------------------------------" << endl;
				cout << "Datos del Cliente" << endl;
				cout << "-------------------------------------" << endl;
				do{
					cout << "El sexo del cliente (M/F): "; cin >> sexo;
					sexo = toupper(sexo); // Lo comvierte a mayuscula
					if(sexo!='M' && sexo!='F'){
						cout << "ERROR: Dato incorrecto, intentalo nuevamente." << endl;
					}
				}while(sexo!='M' && sexo!='F');
				do{
					cout << "Edad del cliente: "; cin >> edad;
					if(edad<=0){
						cout << "ERROR: Dato incorrecto, intentalo nuevamente." << endl;
					}					
				}while(edad<=0);
				do{
					cout << "Tipo de plato (1:Carnes 2:Pescado 3:Vino): "; cin >> tipoPlato;
					if(tipoPlato<1 || tipoPlato>3){
						cout << "ERROR: Dato incorrecto, intentalo nuevamente." << endl;
					}					
				}while(tipoPlato<1 || tipoPlato>3);
				do{
					cout << "Precio por unidad: "; cin >> precio;
					if(precio<=0){
						cout << "ERROR: Dato incorrecto, intentalo nuevamente." << endl;
					}					
				}while(precio<=0);
				do{
					cout << "Cantidad: "; cin >> cantidad;
					if(cantidad<=0){
						cout << "ERROR: Dato incorrecto, intentalo nuevamente." << endl;
					}					
				}while(cantidad<=0);
				// Determinar unidad y porcDcto1
				switch(tipoPlato){
					case 1:
						unidad = "PLATO(s)";
						porcDcto1 = 0.0; // Punto de partida
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.05:porcDcto1;
						porcDcto1 = (cantidad>10)?0.08:porcDcto1;
						break;
					case 2:
						unidad = "FUENTE(s)";
						porcDcto1 = 0.0; // Punto de partida
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.06:porcDcto1;
						porcDcto1 = (cantidad>10)?0.10:porcDcto1;	
						break;					
					case 3:
						unidad = "BOTELLA(s)";
						porcDcto1 = 0.0; // Punto de partida
						porcDcto1 = (cantidad>=5 && cantidad<=10)?0.08:porcDcto1;
						porcDcto1 = (cantidad>10)?0.14:porcDcto1;		
						break;					
				}
				// Determinar porcDcto2
				switch(sexo){
					case 'M':
						porcDcto2	= 0.0; // Punto de partida
						porcDcto2 = (edad>=30 && edad<=40)?0.06:porcDcto1;
						porcDcto2 = (edad>40)?0.08:porcDcto1;	
						break;
					case 'F':
						porcDcto2	= 0.0; // Punto de partida
						porcDcto2 = (edad>=30 && edad<=40)?0.08:porcDcto1;
						porcDcto2 = (edad>40)?0.10:porcDcto1;	
						break;					
				}
				// Calculos
				importeBruto = cantidad * precio;
				dcto1 = importeBruto * porcDcto1;
				dcto2 = importeBruto * porcDcto2;
				importeNeto = importeBruto - dcto1 - dcto2;
				// Reporte de venta
				cout << endl;
				cout << "REPORTE DE VENTA" << endl << endl;
				cout << "----------------------------------------------" << endl;
				cout << "Precio por unidad: " << precio << endl;
				cout << "Unidad: " << unidad << endl;
				cout << "Cantidad: " << cantidad << endl;
				cout << "Importe bruto: " << importeBruto << endl;
				cout << "Descuento 1: " << dcto1 << endl;
				cout << "Descuento 2: " << dcto2 << endl;
				cout << "Importe neto: " << importeNeto << endl;
				cout << endl;
				break;
				
				
			// Opción 2: bbbbb
			case 2:
				cout << "Proceso opción 2" << endl;
				break;	
			// Opción 3: cccccccc
			case 3:
				cout << "Proceso opción 3" << endl;
				break;					

			// Opción 4: Salir
			case 4:
				cout << "Fin del programa." << endl;
				break;
		}
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
