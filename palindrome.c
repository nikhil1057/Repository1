#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder, a;
    scanf("%d", &n);

    a = n;

    while( n!=0 )
    {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n /= 10;
    }

    if (a == reversed)
        printf("YES");
    else
        printf("No");

    return 0;
}
