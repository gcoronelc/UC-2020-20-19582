#include <iostream>
using namespace std;

void hanoi(int num,char A,char C,char B)
{
	if(num==1)
	{
	   cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;      
	}
	else
	{
	  hanoi(num-1,A,B,C);
	  cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
	  hanoi(num-1,B,C,A);
	}
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	// Proceso
	int n;
	cout << "Los Torres son A B C\n";
  	cout << "Numero de discos: "; cin >> n;
  	hanoi(n,'A','C','B');   
	
	// Fin
	system("pause");
	return 0;
}
