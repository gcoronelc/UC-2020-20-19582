#include <iostream>
using namespace std;

int fnFactorial(int n)
{   
	if(n==0){
		return 1; // Finaliza la funci�n
	}
	return n * fnFactorial(n-1);
}

int main( )
{  
	int num, factorial;
   
   do{
		cout<<"Ingrese numero para factorial: ";
		cin>>num;
   }while(num<0);
  
	factorial = fnFactorial(num);

 	cout<<"El factorial es: " << factorial; 
 
 	return 0;
}



