#include<stdio.h>
//Arguments passsed and a return value.
int c=0;//Global declaration of c
int main()
{
    int a,b,result;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("Addition is %d\n",result);
    result=sub(a,b);
    printf("Substraction is %d\n",result);
    result=mul(a,b);
    printf("multiplication is %d\n",result);
    result=div(a,b);
    printf("division is %d\n",result);
    return 0;
}  
int add(int a,int b)
{
    //int c=0;
    c=a+b;
    return c;
}       
int sub(int a,int b)
{
   // int c=0;
    c=a-b;
    return c;
}
int mul(int a,int b)
{
   // int c=0;
    c=a*b;
    return c;
}
int div(int a,int b)
{
    //c=0;
    c=a/b;
    return c;
}