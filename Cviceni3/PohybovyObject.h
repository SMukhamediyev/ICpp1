#ifndef Pohybovy_object_h 
#define Pohybovy_object_h
#include "Object.h"


class PohybovyObject : public Object {

public:
	PohybovyObject(int aId);
	
	double getNatoceniUhel() const;
	void setNatoceniUhel(double aNatoceniUhel);

private:

	double NatoceniUhel;

	int Object::getS() const
	{
		return this->S;

	}

	int Object::getJ() const
	{
		return this->J;
	}
};


#endif //Pohybovy_object_h
