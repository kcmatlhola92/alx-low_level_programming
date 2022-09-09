#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for fuction main goes there */
/**
 * main - Entry point
 *
 * Retain: Always 0 (success)
 */
int main(void)
{
int n, last
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %i is %i and is 0\n", n, last);
}
else if (last < 6 && last !=0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
}
return (0);
}
