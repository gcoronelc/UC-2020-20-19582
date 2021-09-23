#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Constantes
	const float TC_DOLARES = 4.11;
	const float TC_EURO = 4.80;
	const float TC_LIBRA = 5.20;
	
	// Variables
	int opMenu;
	char tipoCambio;
	double importe, cambio;
	string mensaje;
	
	// Control del men� de opciones
	do{
		
		// EL MENU
		system("cls");
		cout << "CASA DE CAMBIO \"QUIERO TU PLATA\"" << endl;
		cout << "=================================================" << endl;
		cout << "1.- Cambio en D�lar a Soles y Viceversa" << endl;
		cout << "2.- Cambio en Euros a Soles y Viceversa" << endl;
		cout << "3.- Cambio en Libras Esterlinas a Soles y Viceversa" << endl;
		cout << "4.- Salir" << endl;
		
		// Leer opci�n
		cout << endl;
		do{
			cout << "Opcion: "; cin >> opMenu;
			if(opMenu<1 || opMenu>4){
				cout << "ERROR: Opci�n incorrecta, intentalo nuevamente." << endl;
			}
		}while(opMenu<1 || opMenu>4);
		
		// Procesar opci�n del men�
		system("cls");
		switch(opMenu){
			
			case 1: // Opci�n 1: CAMBIO DE D�LAR A SOLES Y VICEVERSA
				cout << "CAMBIO DE D�LAR A SOLES Y VICEVERSA" << endl;
				cout << "==================================================" << endl;
				cout << endl;
				
				// LECTURA DE DATOS
				cout << "LECTURA DE DATOS" << endl;
				cout << "---------------------------------" << endl;
				// Leer el tipo de cambio
				cout << endl;
				cout << "TIPO DE CAMIO" << endl;
				cout << "a.- Dolares a Soles" << endl;
				cout << "b.- Soles a Dolares" << endl;
				cout << endl;
				do{
					cout << "Tipo de cambio (a/b)? "; cin >> tipoCambio;
					tipoCambio = toupper(tipoCambio);
					if(tipoCambio != 'A' && tipoCambio != 'B'){
						cout << "ERROR: opci�n incorrecta." << endl;
					}
				}while(tipoCambio != 'A' && tipoCambio != 'B');
				// Leer el importe
				cout << endl;
				do{
					cout << "Importe: "; cin >> importe;
					if(importe <= 0){
						cout << "ERROR: el importe es un valor positivo." << endl;
					}
				}while(importe <= 0);
				
				// PROCESO
				switch(tipoCambio){
					case 'A':
						cambio = importe * TC_DOLARES;
						mensaje = "Su cambio en SOLES es: ";
						break;
					case 'B':
						cambio = importe / TC_DOLARES;
						mensaje = "Su cambio en DOLARES es: ";
						break;						
				}
				
				// REPORTE
				cout << endl;
				cout << "REPORTE" << endl;
				cout << "---------------------------------" << endl;				
				cout << mensaje << cambio << endl;
				cout << endl;
				break;
			
			case 2: // Opci�n 2: bbbbb
				cout << "Proceso opci�n 2" << endl;
				break;	
			
			case 3: // Opci�n 3: cccccccc
				cout << "Proceso opci�n 3" << endl;
				break;					
					
			case 4: // Opci�n 4: Salir
				cout << "Fin del programa." << endl;
				break;
				
		} // Fin switch
		
		system("pause");
	} while(opMenu<4);
	
	// Fin
	return 0;
}
