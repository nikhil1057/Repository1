#include<stdio.h>
#include<string.h>
char *reverseit(char *str, int len)
{
    char *p1 = str;
    char *p2 = str + len - 1;

    while (p1 < p2) {
        char tmp = *p1;
        *p1++ = *p2;
        *p2-- = tmp;
    }

    return str;
}

int main()
{
    char s[10000],*p;
    gets(s);
    p = reverseit(s,strlen(s));
    puts(p);

}
