#include "main.h"

/**
 * _abs - function that computes the absolute
 * value of an integer
 * @n: Always takes in integer type input for function
 * Return: always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
