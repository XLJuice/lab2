// tab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h> 
#include <cmath>

int main()
{
	double a = -1, b = 3, c = -2, d = 2, hx = 0.2, hy = 0.1;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += hx)
		printf("\t%8.2f", x);

	printf("\n");
	for (double y = c; y <= d; y += hy)
	{
		printf("%.2f", y);
		for (double x = a; x <= b; x += hx)
		{
			double z = abs((y*y*y)-2*x) / (x + 2);
			printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n"); 
	getchar();
	return 0;
}
