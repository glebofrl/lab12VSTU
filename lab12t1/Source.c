#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");

	int *pi, i = 5;
	float *pf, f = 2.1f;
	char *pc, c = 'c';
	double *pd, d = 2.1;

	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
	printf("%lu\n", sizeof(pc));
	printf("%lu\n", sizeof(pd));

	system("pause");
}