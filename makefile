fibtrib.out: fibtrib.o fibonacci.o tribonacci.o
	gcc -o fibtrib.out fibtrib.o fibonacci.o tribonacci.o

trib.out: tribtest.o tribonacci.o
	gcc -o trib.out tribtest.o tribonacci.o

tribtest.o: tribtest.c tribonacci.o
	gcc tribtest.c -o tribtest.o -c

fib.out: fibtest.o fibonacci.o
	gcc -o fib.out fibtest.o fibonacci.o

fibtest.o: fibtest.c fibonacci.h
	gcc fibtest.c -o fibtest.o -c

tribonacci.o: tribonacci.c tribonacci.h
	gcc tribonacci.c -o tribonacci.o -c

fibonacci.o: fibonacci.c fibonacci.h
	gcc fibonacci.c -o fibonacci.o -c

clean:
	rm *.o trib.out fib.out
