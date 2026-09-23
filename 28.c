#include<stdio.h>
#include<math.h>
int main()
{
    int n,digit,nodigit=0,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    int original=n;
    int temp=n;
    while(temp!=0)
    {
        nodigit++;
        temp=temp/10;
    }
    printf("%d", nodigit);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+pow(digit,nodigit);
        
        temp=temp/10;
    }

    if(sum==original)
    printf("armstrong");
    else
    printf("notarmstrong");

}