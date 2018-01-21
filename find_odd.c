#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);

    for(i=n+1;i<k;i++)
    {
        if(i%2 != 0)
            printf("%d\n",i);
    }
    return 0;
}
