#include "Pokladna.h"
using namespace std;

int Pokladna::citacId;
Pokladna::Pokladna()
{
	Pokladna::citacId = 1000;
	this->seznamUctenek = new Uctenka[10];
}

Pokladna::~Pokladna()
{
	delete seznamUctenek;
}

Uctenka& Pokladna::vystavUctenku(double castka, double dph)
{
	Uctenka* uctenka = new Uctenka();
	uctenka->setCisloUctenky(Pokladna::citacId++);
	uctenka->setCastka(castka);
	uctenka->setDPH(dph);
	seznamUctenek[pocetUctenek++] = *uctenka;
	return *uctenka;
}

Uctenka& Pokladna::dejUctenku(int cisloUctenky)
{
	for (size_t i = 0; i < pocetUctenek; i++)
	{
		if (seznamUctenek[i].getCisloUctenky() == cisloUctenky) {
			return seznamUctenek[i];
		}
	}
	return seznamUctenek[0];
}

double Pokladna::dejCastku() const
{
	double sum = 0.0;
	for (size_t i = 0; i < pocetUctenek; i++)
	{
		sum += seznamUctenek[i].getCastka();
	}
	return sum;
}

double Pokladna::dejCastkuVcDph() const
{
	double sum = 0.0;
	for (size_t i = 0; i < pocetUctenek; i++)
	{
		sum += seznamUctenek[i].getCastka() * (1.0 + seznamUctenek[i].getDPH());
	}
	return sum;
}
