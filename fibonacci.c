#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fibonacci.h"

int fib(int fn)
{
	int i, n;
	int fn1 = 1;
	int fn2 = 1;
	 fn = fn1 + fn2;
	for (i=3;i<n;i++) {
		fn = fn2 + fn1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
