trib.out: tribtest.o tribonacci.o
	gcc -o trib.out tribtest.o tribonacci.o

tribtest.o: tribtest.c tribonacci.h
	gcc tribtest.c -o tribtest.o -c

tribonacci.o: tribonacci.c tribonacci.h
	gcc tribonacci.c -o tribonacci.o -c

clean:
	rm *.o trib.out
