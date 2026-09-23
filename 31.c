#include<stdio.h>
int main()
{
    int n,digit,rem,sum=0,temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("sum is %d",sum);
}

