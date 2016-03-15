#pragma once

#include "figure2d.h"
#include <string>
using std::string;

class Ellipse : public Figure2D{
	double r1, r2;
  public:
	Ellipse(double, double);
	virtual ~Ellipse();
	string toString()const;
	double area()const;
	double perimeter()const;
};
