#include <stdio.h>

int main() {
    int A, d, n, value, sum=0, i;

    scanf("%d", &n);

    scanf("%d %d", &A, &d);

    value = A;
    for(i = 0; i < n; i++) {
        sum += value;
        value = value + d;
    }

    printf("%d",sum);

 return 0;
}
