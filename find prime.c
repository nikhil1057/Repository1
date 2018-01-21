#include<stdio.h>
#include<math.h>
int isprime (int n)
{
int m,i,flag;
m= sqrt(n);
for(i=2;i<=m;i++)
{
if(n%i==0)
{
return 0;
flag=1;
break;
}
}
if(flag==0)
return 1;
}

int main()
{
        int n,k,i;
    scanf("%d%d",&n,&k);

    for(i=n+1;i<k;i++)
    {
        if(isprime(i))
            printf("%d\n",i);
    }
    return 0;
}
