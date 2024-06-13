#include<stdio.h>
int main()
{
    int i;
    float sum=0, num;
    for(i=1;i<11;i++)
    {
    printf("enter the number");
    scanf("%f",&num);
    if(num<0.0)
    {
        break;
    }
    sum+=num;
    }
    printf("sum of the number is %.2f",sum);
    return 0;
}