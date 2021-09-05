#include "circle.h"

circle::circle(double radius)
{
	if(radius > 0)
		this->radius = radius;
	else 
		throw invalid_argument("The radius must be greater than 0");
}

circle::circle()
{
	radius = 0;
}
double circle::area() const
{
	return 2 * 3.14 * radius;
}

double circle::getRadius() 
{
	return radius;	
}
void circle::setRadius(double)
{
	this->radius = radius;
}

bool circle::operator<(const circle& othCircle)
{
	return this->radius < othCircle.radius;
}
bool circle::operator>(const circle& othCircle)
{
	return this->radius > othCircle.radius;
}
bool circle::operator>=(const circle& othCircle)
{
	return this->radius >= othCircle.radius;
}
bool circle::operator<=(const circle& othCircle)
{
	return this->radius <= othCircle.radius;
}
bool circle::operator==(const circle& othCircle)
{
	return this->radius == othCircle.radius;
}
bool circle::operator!=(const circle& othCircle)
{
	return this->radius != othCircle.radius;
}
ostream& operator<<(ostream& out, const circle& myCircle)
{
	out << "Radius: " << myCircle.radius;
	out << ", Area: " << myCircle.area();
	return out;
}