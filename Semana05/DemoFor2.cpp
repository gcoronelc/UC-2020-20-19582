#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	for(int i=1; i<=10; i++){
		if(i==4){
			continue;
		}
		cout << i << ".- Alianza Campeón" << endl;
		if(i==7){
			break; // Sale del bucle
		}
	}
	cout << "Fin del programa, bye." << endl;
	
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
