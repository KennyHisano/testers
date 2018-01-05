#pragma once

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {

protected:
	std::string color;
public:
	Shape(const std::string& color_param);
	~Shape();
	std::string getColor() const;
	virtual double area();
	virtual std::string toString();
	static bool areaSort(Shape *a, Shape *b) { return a->area() < b->area(); }

};
#endif //!SHAPE_H