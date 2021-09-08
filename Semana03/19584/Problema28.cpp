// ANTHONY EDUARDO CUNYAS LEON 13:51
#include<iostream>
#include<math.h >
using namespace std;

int main(){
	
	// Variables
	float a, b, s, r, m, d;
	
	// Lectura de datos
	cout<<"\n ingrese numero a:";
    cin>>a;
    cout<<"\n ingrese numero b:";
    cin>>b;
    
    // Proceso
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    
    // Reporte
    cout<<a<<"+"<<b<<"="<<s;
    cout<<"\n"<<a<<"-"<<b<<"="<<r;
    cout<<"\n"<<a<<"*"<<b<<"="<<m;
    cout<<"\n"<<a<<"/"<<b<<"="<<d;
    
  return 0;
}

