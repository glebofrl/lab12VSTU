#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()
{
	setlocale(LC_CTYPE, "RUS");

	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6,7.7,8.8,9.9,10.10 };
	float *ptr_a = array;

	printf("array: %p\n", array);
	printf("&array[0]: %p\n", &array[0]);
	printf("&array: %p\n", &array);

	printf("*ptr_a = %p: %.1f\n", &array[0], *ptr_a);

	ptr_a++;
	printf("*ptr_a++ = %p: %.1f\n", &array[1], *ptr_a);

	ptr_a += 4;
	printf("*ptr_a+4 = %p: %.1f\n", &array[5], *ptr_a);

	ptr_a -= 2;
	printf("*ptr_a-2 = %p: %.1f\n", &array[3], *ptr_a);

	printf("\n");


	ptr_a = &array[9];

	for (float *i = ptr_a; i >= array; i--)
	{
		printf("*ptr_a = %p: %.1f\n", i, *i);

	}
	printf("\n");

	for (int i = 9; i >= 0; i--)
	{
		printf("*ptr_a = %p: %.1f\n", ptr_a, *ptr_a);
		ptr_a--;
	}




}