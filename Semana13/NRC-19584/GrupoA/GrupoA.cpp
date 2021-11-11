/* Antony Eduardo Cunyas León
Sarait Mitzuri Quispe Villalobos
Jhosep Cristian Quispe Vasquez
Josue Jhems Gonzales Ccente */

#include<iostream>
#include"Leedatos.h"
using namespace std;
//Variables globales
int opc,op,rpta,cant1=0,cant2=0,cant3=0,cant4=0;
double  montototales=0;
//Protoripo de funciones
int menu(void);
void procesar(void);
double costo(int);
void reportar(void);
void salir(void);


//Funcion principal
int main(){
 do{
  //system("cls");
  rpta=menu();//LLAMADA LA FUNCION
  system("pause");
 }while(rpta!=3);
  return 0;
 	
}

int menu(){ //LA FUNCION LLAMADA
	cout<<"===MENU DE OPCIONES==="<<endl;
	cout<<"[1].PROCESAR "<<endl;
	cout<<"[2].REPORTAR "<<endl;
	cout<<"[3].SALIR "<<endl;
	
	do{
	cout<<"INGRESE OPCION : ";
	opc=leedatoopc();
	if(opc<1||opc>3)
	cout<<"INGRESE OPCION CORRECTA "<<endl;
	}while(opc<1||opc>3);
	switch(opc){
		case 1:  do{
			     procesar();
		         }while(op!=5);
	      	     break;
	
		case 2: reportar();
			   break;
		case 3: salir();
			   break;
	}
	
	return opc;
}
void procesar(){
	int cant;
	double cost,montototal,montobruto,impuesto;
	cout<<"===MENU==="<<endl;
	cout<<"[1].Cultura "<<endl;
	cout<<"[2].Ciencia "<<endl;
	cout<<"[3].Informatica"<<endl;
	cout<<"[4].Salir"<<endl;
	
	
	do{
	cout<<"INGRESE OPCION DE MENU : ";
	op=leedatoop();
	}while(op<1||op>5);
	
	if(op!=5){
		do{
		cout<<"INGRESE EL NUMERO DE UNIDADES CONSUMIDAS : ";
		cant=leedatocant();
		if(cant<=0)
		cout<<"INGRESE NUMERO DE UNIDADES CONSUMIDAS MAYOR A 0"<<endl;
		}while(cant<=0);
	
	cost=costo(op);
	montobruto=cant*cost;
	impuesto=montobruto*0.18;
	montototal=montobruto+impuesto;
	cout<<"===REPORTE INDIVIDUAL==="<<endl;
	cout<<"EL MONTO BRUTO ES : "<<montobruto<<endl;
	cout<<"EL IMPUESTO ES : "<<impuesto<<endl;
	cout<<"EL MONTO TOTAL A PAGAR ES : "<<montototal<<endl;
	
	if(op==1)
	cant1++;
	if(op==2)
	cant2++;
	if(op==3)
	cant3++;
	if(op==4)
	cant4++;
	
	montototales+=montototal;
	}
}
double costo(int x){
	double y;
	if(x==1)
	y=3.50;
	if(x==2)
	y=2.20;
	if(x==3)
	y=3.00;
	if(x==4)
	y=3.50;
	return y;
}
void reportar(){
	cout<<"LA CANTIDAD DE BOCADILLO DE JAMON ES : "<<cant1<<endl;
	cout<<"LA CANTIDAD DE PATATAS FRITAS ES  : "<<cant2<<endl;
	cout<<"LA CANTIDAD DE JUGO ES  : "<<cant3<<endl;
	cout<<"LA GASEOSA ES : "<<cant4<<endl;
	cout<<"EL MONTO ACUMULADO DE LOS MONTOS TOTALES ES  : "<<montototales<<endl;
}
void salir(){
	cout<<"GRACIAS POR INGRESAR :) "<<endl;
}
