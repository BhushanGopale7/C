#include<stdio.h>
//argument passed and a return value. 
int prime();
int main()
{
    int num,flag=0;
    printf("enter the number");
    scanf("%d",&num);
    flag=prime(num);
    if(flag==1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}

int prime(int num)//argument (num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 1;
         //   break;
        }
    }
    return 0;
}