#include "Jugador.h"
#include "stdlib.h"
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
	cout << "Seleccione una opcion (1 = piedra, 2 = papel, 3 = tijeras): ";
	cin >> opcion;
	system("cls");
}

void Jugador::evaluarOpcion(Jugador j) {
	//juego piedra papel y tijeras
	//piedra = 1, papel = 2, tijeras = 3
	if (opcion == 1 && j.opcion == 3) {
		cout << "Ganaste Jugardor 1 (Piedra gana tijeras)" << endl;
		puntaje++;
	}
	else if (opcion == 2 && j.opcion == 1) {
		cout << "Ganaste Jugador 1 (Papel gana piedra)"<< endl;
		puntaje++;
	}
	else if (opcion == 3 && j.opcion == 2) {
		cout << "Ganaste Jugador 2 (Tijeras gana papel)" << endl;
		puntaje++;
	}
	else if (opcion == j.opcion) {
		cout << "Empate!" << endl;
	}
	else if (j.opcion == 1 && opcion == 3) {
		cout << "Ganaste Jugardor 2 (Piedra gana tijeras)" << endl;
		j.puntaje++;
	}
	else if (j.opcion == 2 && opcion == 1) {
		cout << "Ganaste Jugador 2 (Papel gana piedra)" << endl;
		j.puntaje++;
	}
	else if (j.opcion == 3 && opcion == 2) {
		cout << "Ganaste Jugador 1 (Tijeras gana papel)" << endl;
		puntaje++;
	}
	else {
		cout << "Opcion invalida" << endl;
	}
}