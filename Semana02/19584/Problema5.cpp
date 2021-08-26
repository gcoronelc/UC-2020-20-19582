// ANTHONY EDUARDO CUNYAS LEON13:56
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
 
    // Variables
    float x1, x2;
    float y1, y2;
    float x,y;
    float distancia;
 
    cout << "ingrese los datos del primer punto: \n";
    cout << "Ingrese el valor del eje x: "; cin >> x1;
    cout << "Ingrese el valor del eje y: "; cin >> y1;
 
    cout << "ingrese los datos del segundo punto: \n";
    cout << "Ingrese el valor del eje x: "; cin >> x2;
		cout << "Ingrese el valor del eje y: "; cin >> y2;
 
    // Para hallar la distancia
    x = x1 - x2;
    y = y1 - y2;
    distancia = sqrt( pow(x, 2) + pow( y, 2) );
 
    
 
    // Resultado
 		cout << endl << endl;
    cout << "La distancia entre los dos puntos es: " << distancia << endl;
 
    getch();
    return 0;
}
