#include "figure2d.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Figure2D::Figure2D(){}
Figure2D::~Figure2D(){
	cout << "Destructor de Figure 2D" << endl;
}
string Figure2D::toString()const{
	stringstream ss;
	ss << "Figure2D @ " << this;
	return ss.str();
}
