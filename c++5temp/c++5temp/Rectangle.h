#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape {
private:
	double width;
	double length;

public:
	Rectangle(std::string& color_param, double length_param, double width_param); 
	~Rectangle();
	double area();
	std::string toString();
};

#endif // !RECTANGLE_H