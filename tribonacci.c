#include <stdio.h>
#include "tribonacci.h"


int trib(int n)
{
	int i, tn;
	int tn1 = 1;
	int tn2 = 1;
	int tn3 = 1;
	tn = tn3 + tn2 + tn1;
	if(n <= 3) {
		return 1; 
	}
	if(n == 4) { 
		return tn;
	} 
	for(i=4;i<n;i++) {
		tn3 = tn2;
		tn2 = tn1;
		tn1 = tn;
		tn = tn3 + tn2 + tn1;
	}
	return tn;
}

