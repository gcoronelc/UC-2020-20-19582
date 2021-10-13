#include <iostream>
using namespace std;


void mostrarMensaje(string mensaje){
	cout << mensaje;
}

void doblarUnNumero(int &numero){
	numero *= 2;
}

int main(){
	
	// Configuracion
	setlocale(LC_CTYPE,"Spanish");
	
	mostrarMensaje("Hola todos, como les va en el curso?\n");
	mostrarMensaje("A mi, no tan bien, creo que vere youtube para reforzar.\n");
	mostrarMensaje("En cambio yo entiendo todo, eso creo.\n");
	
	int num = 5; // Original
	cout <<  endl;
	cout << "Antes de la llamada: " << num << endl;
	doblarUnNumero(num);
	cout << "Después de la llamada: " << num << endl;
	
	// Fin
	system("pause");
	return 0;
}
