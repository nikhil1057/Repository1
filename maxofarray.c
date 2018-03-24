#include<stdio.h>
int main()
{
    long a[100000],n,i,max=0;

    scanf("%ld",&n);

    for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            if(a[i]>max)
                max=a[i];
        }

        printf("%ld",max);

        return 0;
}
