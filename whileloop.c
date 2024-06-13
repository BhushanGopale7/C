#include<stdio.h>
int main()
{
    int count=0,val;
    printf("enter the number");
    scanf("%d",&val);
    while(val!=0)
    {
        val=val/10;
        count++;
    }
    printf("\nthe number of digits are %d",count);
    return 0;
}