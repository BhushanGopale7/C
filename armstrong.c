#include<stdio.h>
int main()
{
    int num,originalnum,rem,result=0;
    printf("enter the number");
    scanf("%d",&num);
    originalnum=num;
//Armstrong logic is each digit of the number is multiplied the number of digits in it and add it
    while(originalnum!=0)
    {
        rem=originalnum%10;
        result=result+rem*rem*rem;
        originalnum=originalnum/10;
    }
    if(result==num)
    {
        printf("%d is an armstrong number",num);
    }
    else
    printf("%d is not an armstrong number",num);
return 0;    
}