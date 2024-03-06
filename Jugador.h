#pragma once
class Jugador
{
private:
	int puntaje;
public:
	int opcion;
	Jugador();
	void setPuntaje(int);
	int getPuntaje();
	void verPuntaje();
	void seleccionarOpcion();
	void evaluarOpcion(Jugador);
};

