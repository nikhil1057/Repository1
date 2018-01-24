#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
if(n)
{
for(i=1;i<=5;i++)
{
printf("%d\n",n*i);
}
}
else
    printf("Invalid");
return 0;
}
