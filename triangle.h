#pragma once

#include "figure2d.h"
#include <string>
using std::string;

class Triangle : public Figure2D{
	double a, b, c;
  public:
	Triangle(double, double, double);
	virtual ~Triangle();
	string toString()const;
	double area()const;
	double perimeter()const;
};
