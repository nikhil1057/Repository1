#include <stdio.h>
int main()
{
    int n, orig, r, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    orig = n;

    while (orig != 0)
    {
        r = orig%10;
        result += r*r*r;
        orig /= 10;
    }

    if(result == n)
        printf("yes");
    else
        printf("no");

    return 0;
}
