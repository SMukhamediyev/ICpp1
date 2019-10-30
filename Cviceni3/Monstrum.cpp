#include "Monstrum.h"

Monstrum::Monstrum(int aId,int aHp, int aMaxHp) : PohybovyObject(aId)
{
	this->hp = aHp;
	this->maxHp = aMaxHp;
}

int Monstrum::getHp() const
{
	return this->hp;
}

int Monstrum::getMaxHp() const
{
	return this->maxHp;
}

void Monstrum::setHp(int aHp)
{
	this->hp = aHp;
}

void Monstrum::setMaxHp(int aMaxHp)
{
	this->maxHp = aMaxHp;
}
