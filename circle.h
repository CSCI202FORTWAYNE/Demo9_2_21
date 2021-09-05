#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class circle
{
	public:
		circle(double);
		circle();
		double getRadius();
		void setRadius(double);
		double area() const;
		bool operator<(const circle&);
		bool operator>(const circle&);
		bool operator>=(const circle&);
		bool operator<=(const circle&);
		bool operator==(const circle&);
		bool operator!=(const circle&);
		friend ostream& operator<<(ostream&, const circle&);
	private:
		double radius;
	
};
#endif