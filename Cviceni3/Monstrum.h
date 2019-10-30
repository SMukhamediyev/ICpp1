#ifndef Monstrum_h
#define Monstrum_h

#include "PohybovyObject.h"

class Monstrum :PohybovyObject {

public:

	Monstrum(int aId,int hp, int maxHp);
	int getHp() const;
	int getMaxHp()const;

	void setHp(int aHp);
	void setMaxHp(int aMaxHp);

private:
	int hp;
	int maxHp;

};





#endif // Monstrum_h
