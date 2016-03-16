figure:	figure2d.o ellipse.o rectangle.o square.o triangle.o main.o
	g++ figure2d.o ellipse.o rectangle.o square.o triangle.o main.o -o figure

main.o:	main.cpp figure2d.h ellipse.h rectangle.h square.h triangle.h
	g++ -c main.cpp

triangle.o:	triangle.cpp figure2d.h triangle.h
	g++ -c triangle.cpp

square.o:	square.cpp figure2d.h rectangle.h square.h
	g++ -c square.cpp

rectangle.o:	rectangle.cpp figure2d.h rectangle.h
	g++ -c rectangle.cpp

ellipse.o:	ellipse.cpp figure2d.h ellipse.h
	g++ -c ellipse.cpp

figure2d.o:	figure2d.cpp figure2d.h
	g++ -c figure2d.cpp
