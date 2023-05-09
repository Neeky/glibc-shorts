#include <stdio.h>
#include <string.h>

/**
 * int strcmp (const char *s1, const char *s2)
 *      比较两个字符串 s1 和 s2 :
 *          如果 s1 < s2 return 负数
 *          如果 s1 == s2 return 0
 *          如果 s1 > s2 return 正数
 *
 *  int strcasecmp (const char *s1, const char *s2)
 *      同 strcmp 只是不区分大小写
 */

int main()
{
    char foo[32] = "foo";
    char bar[32] = "bar";

    int bar_less_then_foo = strcmp(bar, foo);

    // int strcmp (const char *s1, const char *s2)
    // bar - foo < 0
    if (bar_less_then_foo < 0)
    {
        printf("bar less then foo \n");
    }
    else if (bar_less_then_foo == 0)
    {
        printf("bar equals foo \n");
    }
    else
    {
        printf("bar grate then foo \n");
    }

    char *pfoo = "ABC";
    char *pbar = "abc";
    printf("strcasecmp(pfoo, pbar) = %d \n", strcasecmp(pfoo, pbar)); // strcasecmp(pfoo, pbar) = 0
    return 0;
}