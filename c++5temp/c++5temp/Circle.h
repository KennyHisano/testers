#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


class Circle : public Shape {
private:
	double radius;

public:
	Circle(std::string& color_param, double radius_param);
	~Circle();
	double area();
	std::string toString();
};

#endif // !CIRCLE_H

