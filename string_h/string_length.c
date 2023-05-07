#include <stdio.h>
#include <string.h>

/**
 * strlen(const char *s)
 * strnlen(const char *s, size_t maxlen)
 */

int main()
{
    char letters[32] = "abcde";
    char *p = letters;

    /**
     * strlen 始终返回字符串的长度(不包括最后的\0)
     * sizeof 返回对象占用的空间，这个情况下数组和指针有区别
     */
    printf("strlen(letters) = %lu \n", strlen(letters)); // strlen(letters) = 5
    printf("strlen(p) = %lu \n", strlen(p));             // strlen(p) = 5
    printf("sizeof(letters) = %lu \n", sizeof(letters)); // sizeof(letters) = 32
    printf("sizeof(p) = %lu \n", sizeof(p));             // sizeof(p) = 8
    printf("sizeof(*p) = %lu \n", sizeof(*p));           // sizeof(p) = 8

    /**
     * strnlen 检查字符串长度是有开销的，为了不一直比下去可以设置一个最长检测长度 n
     */
    printf("strnlen(letters, 4) = %lu \n", strnlen(letters, 4));

    return 0;
}