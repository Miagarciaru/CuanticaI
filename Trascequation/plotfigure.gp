set term pngcairo size 1280, 960	
set out 'postraseq.png'
set key box
set xlabel 'Energia' font "Arial, 16"
set ylabel 'Ecuaciones trascendentales' font "Arial, 16"
set yrange [-1e-6:1e-6]
set key width 1 #Deja un espacio para el título dentro de la caja
set key font "Arial, 16" #Cambia la fuente del título por Arial y el tamaño por 16
set border 3 #Elimina los bordes de arriba y a la derecha
set tics nomirror #Elimina los puntos de los ejes arriba y derecha
set border lw 2 #Aumenta el grosor de los ejes
plot 'postraseq.txt' u 1:2 t 'tan' lw 2 lc 7 w l, '' u 1:3 t 'tanh' lw 2 lc 2 w l
