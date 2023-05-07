#include <stdio.h>
#include <string.h>

/**
 * char * strcpy (char *restrict to, const char *restrict from)
 * char * strdup (const char *s)
 * char * stpcpy (char *restrict to, const char *restrict from)
 */

int main()
{
    char to[32];
    char from[32] = "hello world";

    /** strcpy */
    strcpy(to, from);
    printf("chars to = %s \n", to);

    /** 复制一份 from  */
    char *p = strdup(from);
    printf("chars p = %s \n", p);
    printf("address from = %p \n", from);
    printf("address p = %p\n", p);

    /**
     * char * stpcpy (char *restrict to, const char *restrict from)
     * strcpy 返回的是 to 的开关位置, stpcpy 返回的是 to 的结尾位置
     */
    char buffer[24];
    char *pto = buffer;
    pto = stpcpy(pto, "foo");
    pto = stpcpy(pto, "bar");
    printf("buffer = %s \n", buffer);
    puts(buffer);
    printf("buffer = %s \n", buffer);
    return 0;
}