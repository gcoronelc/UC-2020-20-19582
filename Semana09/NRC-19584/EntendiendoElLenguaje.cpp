#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Variables
	int n1, n2;
	double r1, r2;
	
	
	// Datos
	n1 = 53;
	n2 = 77;
	
	// Proceso
	r1 = (53+77)/3;
	r2 = (53+77)*1.0/3;
	
	// Reporte
	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
