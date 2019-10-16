#pragma once
#include "Uctenka.h"

class Pokladna {
	static int citacId;

	Uctenka* seznamUctenek;
	int pocetUctenek;

public:
	Pokladna();
	~Pokladna();
	Uctenka& vystavUctenku(double castka, double dph);
	Uctenka& dejUctenku(int cisloUctenky);
	double dejCastku() const;
	double dejCastkuVcDph() const;
		
};