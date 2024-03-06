#include "Jugador.h"
#include <iostream>
using namespace std;

int main() {
	Jugador j1;
	Jugador j2;
	cout << "Jugador 1" << endl;
	j1.seleccionarOpcion();
	cout << "Jugador 2" << endl;
	j2.seleccionarOpcion();
	j1.evaluarOpcion(j2);
}