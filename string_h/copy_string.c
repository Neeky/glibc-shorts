#include <stdio.h>
#include <string.h>

/**
 * char * strcpy (char *restrict to, const char *restrict from)
 * char * strdup (const char *s)
 */

int main()
{
    char to[32];
    char from[32] = "hello world";

    /** strcpy */
    strcpy(to, from);
    printf("chars to = %s \n", to);

    /** *p */
    char *p = strdup(from);
    printf("chars p = %s \n", p);
    printf("address from = %p \n", from);
    printf("address p = %p\n", p);
    return 0;
}