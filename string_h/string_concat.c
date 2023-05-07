#include <stdio.h>
#include <string.h>

/**
 * char * strcat (char *restrict to, const char *restrict from)
 * char * strncat (char *restrict to, const char *restrict from, size t [Function] size)
 */

int main()
{
    char to[32] = "hello ";
    char from[8] = "world";

    // 让 'hello ' 的后面加上 'world'
    strcat(to, from);
    puts(to);

    //
    to[0] = '\0';
    puts(to);
    strncat(to, from, 4);
    puts(to);
    return 0;
}