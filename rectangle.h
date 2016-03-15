#pragma once
#include "figure2d.h"
#include <string>
using std::string;

class Rectangle:public Figure2D{
	double base, height;
  public:
	Rectangle(double, double);
	virtual ~Rectangle();
	string toString()const;
	double area()const;
	double perimeter()const;
};
