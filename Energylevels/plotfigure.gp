set term pdf
set out 'Energy.pdf'
set xlabel 'x'
set ylabel 'Energy levels'
set yrange [0: 100]
plot 'Energy.txt' u 1:2 t 'E111' w l, '' u 1:3 t 'E112' w l, '' u 1:4 t 'E121' w l, '' u 1:5 t 'E122' w l, '' u 1:6 t 'E211' w l, '' u 1:7 t 'E212' w l, '' u 1:8 t 'E221' w l, '' u 1:9 t 'E222' w l