#include<stdio.h>
int isarm (int n)
{
int orig, r, result = 0;
    orig = n;

    while (orig != 0)
    {
        r = orig%10;
        result += r*r*r;
        orig /= 10;
    }

    if(result == n)
       return 1;
    else
        return 0;
}

int main()
{
        int n,k,i;
    scanf("%d%d",&n,&k);

    for(i=n+1;i<k;i++)
    {
        if(isarm(i))
            printf("%d\n",i);
    }
    return 0;
}

