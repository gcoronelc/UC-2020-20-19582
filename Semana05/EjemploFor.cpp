#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	/*
	for(;;)
		cout << "Hola Gustavo, soy el FOR!!!" << endl;
	*/
	
	cout << "=====================================" << endl;
	int i=1;
	for(; i <= 10;){
		cout << "Este for es gracioso!!!!!";
		i--;
	}
	
	// Fin
	system("pause");
	return 0;
}
