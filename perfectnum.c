#include<stdio.h>
int main()
{
    int i,rem,sum=0,num;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        } 
    }
    if(sum==num)
        {
            printf("the number is perfect %d",sum);
        }
        else 
        {
            printf("number is not perfect");
        }
    return 0;
}