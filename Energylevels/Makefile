all: Energylevels.x Energy.txt Energy.png

Energylevels.x: energylevels.cpp
	g++ -fsanitize=undefined -fsanitize=address energylevels.cpp -o Energylevels.x

Energy.txt: Energylevels.x
	./Energylevels.x > Energy.txt

Energy.png: Energy.txt plotfigure.gp
	gnuplot plotfigure.gp

clean:
	-rm -f Energylevels.x Energy.txt Energy.png *~ *#
