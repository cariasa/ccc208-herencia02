#include "figure2d.h"
#include "ellipse.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

#include <iostream>
using std::cout;
using std::endl;

void otrafuncion(const Figure2D&);

int main(int argc, char* argv[]){
//	Figure2D fig; // La hicimos abstracta
	Ellipse ell(4, 1.5);
	Rectangle rec(12, 4);
	Square sq(3);
	Triangle tri(6,5,5);

//	cout << fig.toString() << endl;
//	cout << fig.tall() << endl; // main.cpp:21:14: error: ‘class Figure2D’ has no member named ‘tall’
	cout << ell.toString() << endl;
//	cout << ell.tall() << endl;
	cout << rec.toString() << endl;
	cout << rec.tall() << endl;
	cout << sq.toString() << endl;
	cout << sq.tall() << endl;
	cout << tri.toString() << endl;
//	cout << tri.tall() << endl;
	cout << "--------- Llamando a otrafuncion ----------------" << endl;
//	otrafuncion(fig);
	otrafuncion(ell);
	otrafuncion(rec);
	otrafuncion(sq);
	otrafuncion(tri);

	return 0;
}

void otrafuncion(const Figure2D& f){
	cout << f.toString() << endl;
	cout << "Area = " << f.area() << endl;
	cout << "Perimetro = " << f.perimeter() << endl;
}
