#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    if(a>0 && b>0){
        printf("Positive");
    }
    else if(a<0 && b<0){
        printf("Negative");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}