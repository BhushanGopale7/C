#include<stdio.h>
int main()
{
    int no,i,a=-1,b=1,c;
    printf("enter the number");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;
}