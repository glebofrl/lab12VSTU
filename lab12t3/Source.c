#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
	setlocale(LC_CTYPE, "RUS");

	int *pa_int, x_int = 5;
	pa_int = &x_int;


	printf("По адресу %p хранится *ptr=%g\n", pa_int, *pa_int);
	pa_int++;
	printf("По адресу %p хранится *ptr=%g\n", pa_int, *pa_int);
	pa_int--;
	printf("По адресу %p хранится *ptr=%g\n", pa_int, *pa_int);

	double *pa_double, x_double = 5;
	pa_double = &x_double;


	printf("\nПо адресу %p хранится *ptr=%g\n", pa_double, *pa_double);
	pa_double++;
	printf("По адресу %p хранится *ptr=%g\n", pa_double, *pa_double);
	pa_double--;
	printf("По адресу %p хранится *ptr=%g\n", pa_double, *pa_double);

	char *pa_char, x_char = 'c';
	pa_char = &x_char;


	printf("\nПо адресу %p хранится *ptr=%g\n", pa_char, *pa_char);
	pa_char++;
	printf("По адресу %p хранится *ptr=%g\n", pa_char, *pa_char);
	pa_char--;
	printf("По адресу %p хранится *ptr=%g\n", pa_char, *pa_char);

	long double *pa_ld, x_ld = 5;
	pa_ld = &x_ld;


	printf("\nПо адресу %p хранится *ptr=%g\n", pa_ld, *pa_ld);
	pa_ld++;
	printf("По адресу %p хранится *ptr=%g\n", pa_ld, *pa_ld);
	pa_ld--;
	printf("По адресу %p хранится *ptr=%g\n", pa_ld, *pa_ld);

	short unsigned int *pa_sui, x_sui = 5;
	pa_sui = &x_sui;


	printf("\nПо адресу %p хранится *ptr=%g\n", pa_sui, *pa_sui);
	pa_sui++;
	printf("По адресу %p хранится *ptr=%g\n", pa_sui, *pa_sui);
	pa_sui--;
	printf("По адресу %p хранится *ptr=%g\n", pa_sui, *pa_sui);

	_Bool *pa_b, x_b = 1;
	pa_b = &x_b;


	printf("\nПо адресу %p хранится *ptr=%g\n", pa_b, *pa_b);
	pa_b++;
	printf("По адресу %p хранится *ptr=%g\n", pa_b, *pa_b);
	pa_b--;
	printf("По адресу %p хранится *ptr=%g\n", pa_b, *pa_b);

	system("pause");

}