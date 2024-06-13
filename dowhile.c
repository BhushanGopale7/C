#include<stdio.h>
int main()
{
    float num,sum=0;
    do
    {
       printf("enter the number");
       scanf("%f",&num);
       sum=sum+num;
    } while (num!=0.0);
    printf("sum of the number is %.2f",sum);
        
}