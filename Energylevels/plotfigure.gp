set term pngcairo size 1280, 960	
set out 'Energy.png'
set key
set xlabel 'x' font "Arial, 16"
set ylabel 'Energy level (J)' font "Arial, 16"
set yrange [0:8e15]
set key bottom left box #posiciona la tabla del título
set key width 1 #Deja un espacio para el título dentro de la caja
set key font "Arial, 16" #Cambia la fuente del título por Arial y el tamaño por 16
set border 3 #Elimina los bordes de arriba y a la derecha
set tics nomirror #Elimina los puntos de los ejes arriba y derecha
unset xtics #elimina la escala en el eje x
set border lw 2 #Aumenta el grosor de los ejes
set key at 3.0,6.2e15 #posiciona el título en la posición x=3 y=6.5e15
plot 'Energy.txt' u 1:2 t 'E111' lw 2 w l, '' u 1:3 t 'E112' lw 2 w l, '' u 1:4 t 'E121' lw 2 w l, '' u 1:5 t 'E211' lw 2 w l, '' u 1:6 t 'E122' lw 2 w l, '' u 1:7 t 'E212' lw 2 w l, '' u 1:8 t 'E221' lw 2 w l, '' u 1:9 t 'E222' lw 2 w l