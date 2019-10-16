#pragma once

class Uctenka {
	int cisloUctenky;
	double castka;
	double dph;

public:
	Uctenka();

	int getCisloUctenky();
	double getCastka();
	double getDPH();

	void setCisloUctenky(int cisloUctenky);
	void setCastka(double castka);
	void setDPH(double dph);
};