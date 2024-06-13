#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=0)
    {
        if(num==0)    
            printf(" you entered zero");
    
        else
            printf("number is negative");
    }
    else
        printf("number is positive");
return 0;
}