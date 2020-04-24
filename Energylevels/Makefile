all: Energylevels.x Energy.txt Energy.pdf

Energylevels.x: energylevels.cpp
	g++ -fsanitize=undefined -fsanitize=address energylevels.cpp -o Energylevels.x

Energy.txt: Energylevels.x
	./Energylevels.x > Energy.txt

Energy.pdf: Energy.txt plotfigure.gp
	gnuplot plotfigure.gp

clean:
	-rm -f Energylevels.x Energy.txt Energy.pdf *~ *#
