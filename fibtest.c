#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main(int argc, char *argv[])
{
	int i, n, fn;
	if(argc == 2) {
		n = atoi(argv[1]);
	}
	else {
		printf("bad input\n");
		return 0;
	}
	fn = fib (n);
	printf("Entered term number: %d\n", n);
	printf("Fibonacci number is: %d\n", fn);
	return 0;
}
