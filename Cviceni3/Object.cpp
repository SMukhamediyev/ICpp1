#include "Object.h"
using namespace std;


Object::Object(int aId) {
	this->id = aId;
	x = 0;
	y = 0;
}

int Object::getId() const
{
	return this->id;
}

double Object::getX() const 
{
	return this->x;
}

double Object::getY() const
{
	return this->y;
}



void Object::setX(const double aX)
{
	this->x = aX;
}

void Object::setY(const double aY)
{
	this->y = aY;
}

