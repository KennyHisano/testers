#define _USE_MATH_DEFINES

#include <math.h>
#include <sstream>


#include "Circle.h"



Circle::Circle(std::string & color_param, double radius_param) : Shape(color_param)
{
	radius = radius_param;
}

Circle::~Circle() {}

double Circle::area()
{
	 double value = radius*radius*M_PI ;
	 return value;
}

std::string Circle::toString()
{
	std::ostringstream oss;
	oss << getColor() << " circle with radius of " << radius << " and area of " << area() << std::endl;
	return oss.str();
}
