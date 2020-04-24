set term pdf
set out 'Energy.pdf'
set xlabel 'x'
set ylabel 'Energy levels'
plot 'Energy.txt' u 1:2 w l, '' u 1:3 w l, '' u 1:4 w l, '' u 1:5 w l, '' u 1:6 w l,'' u 1:7 w l, '' u 1:8 w l, '' u 1:9 w l 