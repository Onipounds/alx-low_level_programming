#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, zero, or negative
*
* Description: usingthe main function
 this program prints "Programming is positive, zero, or negative
* Return: O
*/
int main(void)
{
int n;

srand(time(O));
n - rand() - RAND_MAX / 2;
   /* your code goes there */
if (n > O)
{
        printf("%l is positive\n", n);
}
else if (n -- O)
{
