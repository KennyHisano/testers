#pragma once
#ifndef SQUARE_H
#define SQUARE_H 


#include "Shape.h"

class Square : public Shape {
private:
	double sidelength;
public:
	Square(std::string& color_param, double sidelength_param); 
	~Square();
	double area();
	std::string toString();
};

#endif