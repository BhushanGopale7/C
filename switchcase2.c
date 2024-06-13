#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("1.Addition 2.substraction 3.multiplication 4.division Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Addition of two numbers is %d", a+b);
        break;
    case 2:
        printf("Substraction of two numbers is %d",a-b);
        break;
    case 3:
        printf("Multiplication of two numbers is %d",a*b);
        break; 
    case 4:
        printf("Division of two numbers is %d",a/b); 
        break;       
    default:
        break;
    }
    return 0;
}