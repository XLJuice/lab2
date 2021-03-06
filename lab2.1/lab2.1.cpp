// lab2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define CUBE(x) (x)*(x)*(x)
#define F(x) CUBE(x)-cos(2*(x))

int main()
{
	double x = -0.5, S = 0 ,a = 1.0;
	int N = 20;
	for (int n = 0; n <= N; ++n) {
		S += a;
		a *= -2 * x*x / ((n + 1)*(2 * n + 1));
		
	}
	S = (x*x*x) - S;
	double y = F(x);
	printf("Sum:%.7f\nControl: %f\nTolerance: %f\n", S, y,fabs(S-y));
    return 0;
}

