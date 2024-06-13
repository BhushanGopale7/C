#include<stdio.h>
//this program shows no argument passing but a return value 
int main()
{
    int num,i,flag=0;
    num=getvalue();
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
         //   break;
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
    return 0;
}
int getvalue()//no arguments passed
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    return num;//returning number
}