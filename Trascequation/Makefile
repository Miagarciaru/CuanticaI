all: postraseq.x postraseq.txt postraseq.png

postraseq.x: partraseq.cpp
	g++ -fsanitize=undefined -fsanitize=address partraseq.cpp -o postraseq.x

postraseq.txt: postraseq.x
	./postraseq.x > postraseq.txt

postraseq.png: postraseq.txt plotfigure.gp
	gnuplot plotfigure.gp

clean:
	-rm -f postraseq.x postraseq.txt postraseq.png *~ *#
