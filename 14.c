#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character ");
    scanf("%c",&ch);
    if(ch>='A' && ch <='Z')
    {
        printf("char is capital");

    }
    else if(ch>='a' && ch <='z')
    {
        printf("char is small");
    }
    else
    {
        printf("char is symbolic");
    }
}
