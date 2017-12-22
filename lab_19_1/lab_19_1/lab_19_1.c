#include <stdio.h>

int sum(int a, int b);
int product(int a, int b);
double average(double d[]);

int main(void)
{
	int (*pf1) (int, int)=sum;
	double (*pf2) (double[])=average;

	sum(3,5);

	pf1(3,5);

	return 0;
}
