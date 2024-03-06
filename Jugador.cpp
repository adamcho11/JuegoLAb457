#include "Jugador.h"

#include <iostream>
using namespace std;

Jugador::Jugador()
{
	puntaje = 0;
	opcion = 0;
}

void Jugador::setPuntaje(int p)
{
	puntaje = p;
}

void Jugador::verPuntaje()
{
	cout << "Puntaje: " << puntaje << endl;
}
int Jugador::getPuntaje()
{
	return puntaje;
};

void Jugador::seleccionarOpcion()
{
	cout << "Seleccione una opcion: ";
	cin >> opcion;
}

void Jugador::evaluarOpcion(Jugador j) {
	//juego piedra papel y tijera
	//piedra = 1, papel = 2, tijera = 3

	if (opcion == 1 && j.opcion == 3) {
		cout << "Ganaste!" << endl;
		puntaje++;
	}
	else if (opcion == 2 && j.opcion == 1) {
		cout << "Ganaste!" << endl;
		puntaje++;
	}
	else if (opcion == 3 && j.opcion == 2) {
		cout << "Ganaste!" << endl;
		puntaje++;
	}
	else if (opcion == j.opcion) {
		cout << "Empate!" << endl;
	}
	else {
		cout << "Perdiste!" << endl;
	}
}