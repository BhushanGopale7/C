#include<stdio.h>
int main()
{
    char a;
    printf("enter a single character\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("the entered character is vowel");
    }
    else
    {
        printf("the character is consonant");
    }
    return 0;
}