#include "Shape.h"
#include <iostream>
Shape::Shape(const std::string & color_param)
	:color(color_param){}

Shape::~Shape() {}

std::string Shape::getColor() const
{
	return color;
}

double Shape::area()
{
	return 0.0;
}

std::string Shape::toString()
{
	return std::string();
}
