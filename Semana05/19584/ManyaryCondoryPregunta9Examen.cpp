#include<iostream>
#include<conio.h>
using namespace std;

int main()
{ 	
	// Configurar
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables

	float bono,desc,IDesc,IVenta,IPagar,IBono;
	char categoria;
	int control;
	
	// Lectura de datos

	cout << "SELECCIONE LA CATEGORIA DE SU DESTINO\n" << endl;
	cout << "Categoria - A" << endl;
	cout << "Categoria - B" << endl;
	cout << "Categoria - C" << endl;
	cout << "Categoria - D" << endl;
	cout << "Categoria - E" << endl << endl;
	cout << "Opcion? "; cin >> categoria;
	cout << endl;
	cout << "Introduzca el importe de la venta de sus pasajes: "; cin >> IVenta;
	
	// Validación y Proceso
	if(IVenta>0){
		control = 1;	
		switch(categoria){
			case 'A':case'a':
			desc=0.05;
			bono=0.1;	
			break;		
				
			case 'B':case'b':
			desc=0.07;
			bono=0.15;
			break;	
					
			case 'C':case'c':
			desc=0.09;
			bono=0.2;
			break;	
					
			case 'D':case'd':
			desc=0.11;
			bono=0.25;
			break;
						
			case 'E':case'e':
			desc=0.14;
			bono=0.3;
			break;
			
			default:
			control = 0;
		}
		if( control == 0){
			cout << "Seleccione una categoria valida." << endl;
		}else{

		IDesc=IVenta*desc;
		IPagar=IVenta-IDesc;
		IBono=IVenta*bono;
		
		// Reporte		
		cout<<"Usted recibira un descuento es de: "<<"s/" <<IDesc <<endl;
		cout<<"El Importe que debe pagar es de: "<<"s/" << IPagar<<endl;
		cout<<"Usted recibira un bono de: "<<"s/" << IBono <<endl;}
			
	} else{
		cout << "El importe de la venta de sus pasajes debe ser mayor que cero." << endl;
	}
	getch();
	//Fin
	return 0;
}
