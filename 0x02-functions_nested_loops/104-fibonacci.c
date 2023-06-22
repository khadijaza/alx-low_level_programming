#include "main.h"

/**
 * num length - returns the lenght of string
 * @num: operand number
 * Return: number of digits
*/

int num length(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}
	return (length);
}
/**
 * main - Entry point
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2 follwed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initial0s = numlength(mx) - 1 - numlength(f1);
		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;

		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
