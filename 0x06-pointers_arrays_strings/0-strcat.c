#include "main.h"
/*8
**_strcat - appends the src string to the dest
*
*/
char *_strcat(char *dest, char *src)
{
int i,j;
for (i = 0; dest[i] != '\0'; i++);
{
}
for (j =0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
return (dest);
}
