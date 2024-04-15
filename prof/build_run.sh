g++ -Wall -pg -o test_gprof ../src/matrix.cpp ../src/main.cpp
./test_gprof

gprof test_gprof gmon.out >gprof.txt

python3 -m gprof2dot<gprof.txt >gprof.dot
dot -Tpdf -o gprof.pdf gprof.dot
