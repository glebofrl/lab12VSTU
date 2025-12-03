#include <stdio.h>
#include <locale.h>
#include <math.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");
	int x = 12345;
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;

	prt = &x;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
	puts("");


	float y = 12345.0;
	float* prt_y;

	prt_y = &y;
	a = (unsigned char*)prt_y;

	for (int i = sizeof(float) - 1; i >= 0; i--)
	{
		printf("%.2x\n", *(a + i));

	};

	//printf("\n%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
	puts("");

	double z = 12345.0;
	double* prt_z;

	prt_z = &z;
	a = (unsigned char*)prt_z;

	for (int i = sizeof(double) - 1; i >= 0; i--)
	{
		printf("%.2x\n", *(a + i));

	};

}