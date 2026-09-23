#include<stdio.h>
int main()
{
    int a,b;
     int n=1;
    printf("enter a(base) and b(exponent) : \n");
    scanf("%d %d",&a ,&b);
    for(int i=1;i<=b;i++)
    {
        
        n=n*a;

    }
    printf("%d^%d is %d",a,b,n);
}