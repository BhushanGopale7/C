#include<stdio.h>
int fact(int number);
int main()
{
    int number;
    printf("enter the value of number");
    scanf("%d",&number);
    printf("factorial of number is %d ",fact(number));
}
int fact(int number)
{
    if(number>=1)
    {
        return number*fact(number-1);//recursion 
    }
    else
    {
        return 1;
    }
}