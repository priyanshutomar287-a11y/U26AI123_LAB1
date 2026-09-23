#include<stdio.h>
#include<math.h>

int main()
{
    int fact=1;
    int n;
    printf("enter the number :\n");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;

    }
    printf("factorial is %d",fact);
}