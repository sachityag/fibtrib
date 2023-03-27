#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"
#include "tribonacci.h"


int main(int argc, char *argv[])
{
	int n, fn;
	char q;
	if (argc == 3) {
		q = argv[1][0];
		n = atoi(argv[2]);
	}
	else {
		printf("not a valid sequence\n");
		return 0;
	}
	if(q == 'f') {
		fn = fib (n);
		printf("Entered term number: %d\n", n);
		printf("Fibonacci number is: %d\n", fn);
	}
	if(q == 't') {
		fn = trib (n);
		printf("Entered term number: %d\n", n);
		printf("Tribonacci number is: %d\n", fn);
	}
	return 0;
}


