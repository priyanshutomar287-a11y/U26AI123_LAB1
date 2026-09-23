#include<stdio.h>
int main()
{
    int n,rev=0,temp,digit,original;
    printf("enter the number ");
    scanf("%d",&n);
    original=n;
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;

    }
    if(rev==original)
    {
        printf("palindrom");
    }
    else
    printf("not palindrom");
}