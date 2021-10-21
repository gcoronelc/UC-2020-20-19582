/*
Fase 1: Arquitectura del programa
Fase 2: Procesar una persona
Fase 3: Contadores y acumuladores
*/

#include <iostream>
#include <math.h>
using namespace std;

// Variables globales
int contPersonas, contPersonasPesoNormal, contPersonalObesidadMedia, contPersonasObsidadMorbida;

// Funciones y procedimientos
void mostrarCabecera();
void inicializaVariables();
char leeDatoSiNo(string etiqueta, string mensaje);
void mostrarReporteFinal();
void procPersona();
int leerEntero(string etiqueta,int limiteInferior, int limiteSuperios);
double calcularIMC(int pesoKg, int tallaCm);
string determinarEstado( double imc );
void procActualizaContadores(double imc);

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	// Variables
	char rpta;
	// Cabecera
	mostrarCabecera();
	// Control principal
	inicializaVariables();
	do{
		// Procesar persona
		procPersona();
		// Existe otra persona para procesar?		
		rpta = leeDatoSiNo("¿Procesa otra persona (S/N)?","Error en el dato ingresado.");
	} while(rpta=='S');
	// Reporte final
	mostrarReporteFinal();
	// Fin
	system("pause");
	return 0;
}

// Inicializa variables globales
void inicializaVariables(){
	contPersonas = 0;
	contPersonasPesoNormal = 0;
	contPersonalObesidadMedia = 0;
	contPersonasObsidadMorbida = 0;
}

// Procesar una persona
void procPersona(){
	// Control
	contPersonas++;
	// Variables
	int pesoKg, tallaCm;
	double imc;
	string estado;
	// Lectura
	cout << endl;
	cout << "PERSONA NRO. " << contPersonas << endl;
	cout << "------------------------------------" << endl;
	pesoKg = leerEntero("Ingrese el peso en Kg [38-260]: ",38,260);
	tallaCm = leerEntero("Ingrese la talla en Cm [90-220]: ",90,220);
	// Proceso
	imc = calcularIMC(pesoKg, tallaCm);
	estado = determinarEstado( imc );
	// Actualizar contadores
	procActualizaContadores(imc);
	// Reporte
	cout << endl;
	cout << "PERSONA NRO. " << contPersonas << endl;
	cout << "------------------------------------" << endl;
	cout << "IMC: " << imc << endl;
	cout << "Estado: " << estado << endl;
	cout << endl;
}

// Actualiza contadores
void procActualizaContadores(double imc){
	contPersonasPesoNormal += (imc>=18,50 && imc<25.0)?1:0;
}

// Muestra el reporte final
void mostrarReporteFinal(){
	cout << endl;
	cout << "Reporte final." << endl;
	cout << "Total de personas: " << contPersonas << endl;
	cout << "Total de personas peso normal: " << contPersonasPesoNormal << endl;
	cout << endl;
}

double calcularIMC(int pesoKg, int tallaCm){
	double imc;
	imc = pesoKg / pow(tallaCm/100.0,2);
	return imc;
}

string determinarEstado( double imc ){
	string estado;
	estado = "IMC raro"; // Valor inicial
	estado = (imc>=40.0)?"Obesidad mórbida":estado;
	estado = (imc>=35.0 && imc<40.0)?"Obesidad medio":estado;
	estado = (imc>=30.0 && imc<35.0)?"Obesidad leve":estado;
	estado = (imc>=25.0 && imc<30.0)?"Sobre peso":estado;
	estado = (imc>=18.50 && imc<25.0)?"Peso normal":estado;
	estado = (imc>=0 && imc<18.50)?"Infra peso":estado;
	return estado;
}

// Lee un numero entero según el rango
int leerEntero(string etiqueta,int limiteInferior, int limiteSuperios){
	int numero;
	do{
		cout << etiqueta; cin >> numero;
		if(numero<limiteInferior || numero>limiteSuperios){
			cout << "ERROR, el numero esta fuera del rango." << endl;
		}
	}while(numero<limiteInferior || numero>limiteSuperios);
	return numero;
}

// Lee S o N.
// Recibe la etiqueta y el mensaje de error.
char leeDatoSiNo(string etiqueta, string mensaje)
{
	char dato;
	// Proceso: Inicio
	do{
		cout << etiqueta;
		cin  >> dato;
		dato = toupper(dato);
		if(dato != 'S' && dato != 'N')
		{
			cout << mensaje << endl;
		}				
	}while(dato != 'S' && dato != 'N');
	// Proceso: Fin
	return dato;	
}

// Muestra la cabecera del programa
void mostrarCabecera(){
	cout << "CONTROLA TU IMC" << endl;
	cout << "LA SALUD ESTA PRIMERO" << endl;
	cout << endl;
}
