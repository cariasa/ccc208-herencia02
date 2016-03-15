#pragma once

#include <string>
using std::string;

class Figure2D{
  public:
	Figure2D();
	virtual ~Figure2D();
	string toString()const;
	double area()const;
	double perimeter()const;
};
