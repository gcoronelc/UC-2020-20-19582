#include <iostream>
using namespace std;

int fnFibonacci(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fnFibonacci(n-1) + fnFibonacci(n-2);
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	cout << "FIBONACCI EN ACCION" << endl;
	for(int n=1; n<=10; n++){
		cout << n << "\t" << fnFibonacci(n) << endl;
	}
	
	cout << endl;
	cout << "Para n=15: " << fnFibonacci(15) << endl;
	
	cout << "FIBONACCI EN ACCION: ";
	for(int n=1; n<=15; n++){
		cout << fnFibonacci(n) << " ";
	}
	cout << endl;
	
	// Fin
	system("pause");
	return 0;
}
