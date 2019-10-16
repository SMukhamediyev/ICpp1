#include "Uctenka.h"

Uctenka::Uctenka()
{
}

int Uctenka::getCisloUctenky()
{
	return cisloUctenky;
}

double Uctenka::getCastka()
{
	return castka;
}

double Uctenka::getDPH()
{
	return dph;
}

void Uctenka::setCisloUctenky(int cisloUctenky)
{
	this->cisloUctenky = cisloUctenky;
}

void Uctenka::setCastka(double castka)
{
	this->castka = castka;
}


void Uctenka::setDPH(double dph)
{
	this->dph = dph;
}
