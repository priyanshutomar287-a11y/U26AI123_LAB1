#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    int realsum=0;
    while(sum!=0)
    {
        rem=realsum%10;
        realsum=realsum+rem;
        realsum=realsum/10;
    }
    printf("real sum is %d",realsum);
}

