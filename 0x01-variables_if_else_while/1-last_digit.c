#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
0-positive_or_negative.c int n, s;

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c /* your code goes there */
0-positive_or_negative.c s = n % 10;
0-positive_or_negative.c if (s > 5)
0-positive_or_negative.c {
0-positive_or_negative.c printf("Last digit of %d is %d and is greater than 5\n", n, s);
0-positive_or_negative.c }
<<<<<<< HEAD
0-positive_or_negative.c if (num == 0)
=======
0-positive_or_negative.c else if (s == 0)
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
0-positive_or_negative.c {
0-positive_or_negative.c printf("Last digit of %d is %d and is 0\n", n, s);
0-positive_or_negative.c }
<<<<<<< HEAD
0-positive_or_negative.c if (num < 6)
=======
0-positive_or_negative.c else if (s < 6)
>>>>>>> c38d008b18676f16774155151031a0fcc1c46752
0-positive_or_negative.c {
0-positive_or_negative.c printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
0-positive_or_negative.c }
0-positive_or_negative.c return (0);
