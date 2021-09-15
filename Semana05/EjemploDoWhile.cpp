#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int i = -10;
	do{
		cout << "Esto no se imprime!!!" << endl;
		i--;
	}while(i>0);
	
	
	// Fin
	system("pause");
	return 0;
}
