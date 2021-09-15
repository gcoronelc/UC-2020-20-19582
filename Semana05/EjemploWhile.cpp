#include <iostream>
using namespace std;

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	int i = 10;
	
	while(i>0){
		cout << "Los bucles son cheveres!!!" << endl;
		i--;
	}
		
	cout << "=====================================================" << endl;
	i = 10;
	while(i-->0){
		cout << i << ".- Los bucles son un dolor de cabeza!!!!" << endl;
	}
	
	cout << "=====================================================" << endl;
	i = 10;
	while(--i>0){
		cout << i << ".- Tu eres arquitecto de tu destino!!!!" << endl;
	}
	
	cout << "=====================================================" << endl;
	i = -10;
	while(i>0){
		cout << "Esto no se imprime!!!" << endl;
		i--;
	}
	
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
