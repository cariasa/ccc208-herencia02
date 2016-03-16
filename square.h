#pragma once

#include "rectangle.h"
#include <string>
using std::string;

class Square : public Rectangle{
  public:
	Square(double);
	virtual ~Square();
	string toString()const;
};
