par: postraseq.x postraseq.txt postraseq.png

impar: negtraseq.x negtraseq.txt negtraseq.png

postraseq.x: partraseq.cpp
	g++ -fsanitize=undefined -fsanitize=address partraseq.cpp -o postraseq.x

postraseq.txt: postraseq.x
	./postraseq.x > postraseq.txt

postraseq.png: postraseq.txt plotfigure.gp
	gnuplot plotfigure.gp

negtraseq.x: impartraseq.cpp
	g++ -fsanitize=undefined -fsanitize=address impartraseq.cpp -o negtraseq.x

negtraseq.txt: negtraseq.x
	./negtraseq.x > negtraseq.txt

negtraseq.png: negtraseq.txt plotfigure2.gp
	gnuplot plotfigure2.gp

clean:
	-rm -f postraseq.x postraseq.txt postraseq.png negtraseq.x negtraseq.txt negtraseq.png *~ *#
