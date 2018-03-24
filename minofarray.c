#include<stdio.h>
int main()
{
    long a[100000],n,i,min;

    scanf("%ld",&n);

    for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }

        min = a[0];

         for(i=0;i<n;i++)
        {
            if(min > a[i])
            {
                min = a[i];
            }
        }

        printf("%ld",min);

        return 0;
}
