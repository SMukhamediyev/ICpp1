#ifndef object_h
#define object_h

class Object
{
public:
	Object(int aid);
	virtual ~Object() {};

	int getId() const;
	double getX() const;
	double getY() const;


	void setX(const double x);
	void setY(const double y);
	

private:
	int id;
	double x;
	double y;

};



#endif // object_h
