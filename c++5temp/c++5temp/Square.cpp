#include <sstream>

#include "Square.h"

Square::Square(std::string & color_param, double sidelength_param)
	: Shape(color_param), sidelength(sidelength_param)
{
}

Square::~Square()
{
}

double Square::area()
{
	double value = sidelength*sidelength;
	return value;
}

std::string Square::toString()
{
	std::ostringstream oss;
	oss << getColor() << " Square with side length of " << sidelength << " and area of " << area() << std::endl;
	return oss.str();
}
