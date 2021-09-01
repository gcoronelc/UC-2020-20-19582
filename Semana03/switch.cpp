#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int x = 1;
	
	switch( x ){
		case 1:
			cout << "Hi!" << endl;
			// break;
		case 2:
			cout << "Bye!" << endl;
			break;			
		default:
			cout << "Hello!" << endl;
	}
	cout << "C++ es un excelente lenguaje!!!" << endl;
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
