#include<stdio.h>
//int htis program no argument is passed and no return value by function.
void primenum();
int main()
{
    primenum();
    return 0;
}
void primenum()
{
    int num,i,flag=0;
    printf("Enter the Number");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}