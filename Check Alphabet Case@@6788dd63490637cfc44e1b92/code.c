#include <stdio.h>
int  main()
{
    char a;
    scanf("%c", &a);
    if (a>='a' && a<='z'){
        printf("Lowercase");
    }
    if else (a>='A' && a<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}