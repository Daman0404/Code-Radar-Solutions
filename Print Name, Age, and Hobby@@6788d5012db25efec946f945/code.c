#include <stdio.h>
int main()
{
    char name[50],hobby[50];
    int age;
    scanf("%c %d %c",&name, &age, &hobby);
    printf("Name: %c",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %c",hobby);
    return 0;

}