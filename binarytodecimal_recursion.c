#include<stdio.h>
#include<math.h>
int btod(long n);
int main()
{
    long n;
    printf("Enter the binary number");
    scanf("%ld",&n);
    printf("binary to decimal %d",btod(n));
}
int btod(long n)
{
    int i=0,rem,dec=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,i);
        i++;
    }
    return dec;
}