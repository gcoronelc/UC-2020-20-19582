#include<iostream>
using namespace std;
int main(){
int cajas;
float precio, transporte,porcentaje,Inversion,Venta;
    cout<<"Ingresar que porcentaje de ganancia que desea en decimales: " ;cin>>porcentaje;
cajas=50;
cout<<"Ingresar precio que compro cada caja: ";cin>>precio;
transporte=cajas*precio*0.05;
Inversion=cajas*precio+transporte;
cout<<"Lo invertido es:  "<<Inversion<<endl;
cout<<"El numero de cajas es: "<<cajas<<endl;
Venta=(porcentaje*Inversion+Inversion)/50;
cout<<"El precio de venta por caja es :  "<<Venta;

return 0;
}
