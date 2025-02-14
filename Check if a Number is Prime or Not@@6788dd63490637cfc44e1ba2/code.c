#include <stdio.h>
int  main()
{
    int a;
    scanf("%d", &a);
    if(a%a==1){
        printf("Not Prime");
    }
    else if(a%a==0){
        printf("Prime");
    }
    return 0;
}