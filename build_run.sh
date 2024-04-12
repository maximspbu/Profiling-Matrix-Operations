cc -Wal -pg -o test_gprof test_gprof.c
./test_gprof

gprof test_gprof gmon.ount >gprof.txt

python3 -m gprof2dot<gprof.txt >gprof.dot
dot -Tpdf -o gprof.pdf gprof.dot
