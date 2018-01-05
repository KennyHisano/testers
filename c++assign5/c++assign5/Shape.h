#pragma once
#ifndef Shape_h
#define Shape_h

#include <string>

class Shape {
	
private:
	std::string color;
public:
	Shape();
	std::string getColor() const;
	virtual double area() const;
	virtual std::string toString() const;



};
#endif // !Shape_h

