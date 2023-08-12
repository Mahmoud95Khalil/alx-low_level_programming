#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main -THE Type of last digit
 * Return:0 (success0)
 */
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
printf("Last digit of" n "is" digit "and is greater than 5"), \n;
else if (digit == 0)
printf("Last digit of" n "is" digit "and is 0"), \n;
else
printf("Last digit of" n "is" digit "and is less than 6 and not 0"), \n;
return (0);
}
