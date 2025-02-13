#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int LSB = (a>>b)&1;
    printf("%d", LSB);
    return 0;
}