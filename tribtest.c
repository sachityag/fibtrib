#include <stdio.h>
#include <stdlib.h>
#include "tribonacci.h"



int main(int argc, char *argv[])
{
	int i, n, tn;
	if(argc == 2) {
		n = atoi(argv[1]);
	}
	else {
		printf("bad input\n");
		return 0;
	}
	tn = trib (n);
	printf("Entered term number: %d\n", n);
	printf("Tribonacci number is: %d\n", tn);
	return 0;
}
