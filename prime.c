#include<stdio.h>
#include<math.h>
int main(){
int n,i,m=0,flag=0;
scanf("%d",&n);
m= sqrt(n);
for(i=2;i<=m;i++)
{
if(n%i==0)
{
printf("No");
flag=1;
break;
}
}
if(flag==0)
printf("yes");
return 0;
 }
