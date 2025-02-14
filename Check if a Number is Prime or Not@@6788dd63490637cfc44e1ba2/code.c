#include <stdio.h>
int  main()
{
    int a;
    scanf("%d", &a);
    if(a%a==1){
        printf("Prime");
    }
    else if(a%a==0){
        printf("Not Prime");
    }
    
    return 0;
}