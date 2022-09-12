#include <stdio.h>

?**
cat >> 6-size.c << EOL
#include <stdio.h>


/** 

* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size f a char: %zu byte(s)\n", sizeof(char));
return (0;
