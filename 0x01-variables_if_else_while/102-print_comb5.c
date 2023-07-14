#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1Tens, num1Ones, num2Tens, num2Ones;

num1Tens = 0;
while (num1Tens <= 9)
{
num1Ones = 0;
while (num1Ones <= 9)
{
num2Tens = num1Tens;
while (num2Tens <= 9)
{
num2Ones = (num2Tens == num1Tens) ? num1Ones + 1 : 0;
while (num2Ones <= 9)
{
putchar(num1Tens + '0');
putchar(num1Ones + '0');
putchar(' ');
putchar(num2Tens + '0');
putchar(num2Ones + '0');

if (!(num1Tens == 9 && num1Ones == 8 &&
num2Tens == 9 && num2Ones == 9))
{
putchar(',');
putchar(' ');
}

num2Ones++;
}
num2Tens++;
}
num1Ones++;
}
num1Tens++;
}

putchar('\n');

return (0);
}

