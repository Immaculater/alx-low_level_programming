
#include <unistd.h>
/**
 * _putchar-writesbthe character c to stdout
 *  @c:
 *
 * Return: on Success
 * on error -1
 */
int _putchar(char c)

{
return(write(1,&c, 1));
}
