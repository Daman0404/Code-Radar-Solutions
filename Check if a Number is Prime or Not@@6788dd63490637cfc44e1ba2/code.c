#include <stdio.h>
int  main()
{
    int a;
    scanf("%d", &a);
    if(a%1==1){
        printf("Prime");
    }
    else if(a%a==1){
        printf("Prime");
    }
    else if(a%1==0){
        printf("Prime");
    }
    else if(a%a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}