#include <stdio.h>
#include<math.h>

int main(void)
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>0 && b>0)
    {c = pow(a,b);
    printf("%d",c);
    }
    else
        printf("Invalid input");
    return 0;
}

