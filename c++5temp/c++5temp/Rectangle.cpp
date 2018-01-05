#include <sstream>

#include "Rectangle.h"

Rectangle::Rectangle(std::string & color_param, double length_param, double width_param)
	:Shape(color_param),length(length_param),width(width_param)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::area()
{
	double value = length*width;
	return value;
}

std::string Rectangle::toString()
{
	std::ostringstream oss;
	oss << getColor() << " Rectangle with length of " << length << " and width of " << width << " and area of " << area() << std::endl;
	return oss.str();

}
