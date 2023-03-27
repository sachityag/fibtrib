#include "fibonacci.h"

int fib (int n)
{
	int i, fn;
	int fn1 = 1;
	int fn2 = 1;
	fn = fn1 + fn2;
	if (n <= 2) {
		return 1;
	}
	if (n == 3) {
		return fn;
	}
	for (i=3;i<n;i++) {
		fn2 = fn1;
		fn1 = fn;
		fn = fn2 + fn1;
	}
	return fn;
}
