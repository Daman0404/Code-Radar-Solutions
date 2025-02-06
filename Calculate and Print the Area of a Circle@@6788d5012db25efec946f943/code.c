#include <stdio.h>
int main()
{
    int r;
    scanf("%d", &r);
    float pi[5] = 3.14;
    float area[5] = pi*r*r;
    printf("Area: %.2f",area);
    return 0;
}