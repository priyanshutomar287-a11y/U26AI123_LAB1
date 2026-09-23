#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0,rem;
    printf("enter the number ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("reverse number is %d",rev);
}