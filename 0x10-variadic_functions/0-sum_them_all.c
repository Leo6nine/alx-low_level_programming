#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paramters.
 * @n: Number of parameter that will be passed to the function.
 * @...: A variable number of paramters to calculate the sum
 * Return: If n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, sum = 0;

va_start(nums, n);

for (i = 0; i < n; i++)
sum += va_arg(nums, int);

va_end(nums);

return (sum);
}
