#include<stdio.h>
int main()
{
    int n;
    int odd=0,even=0;
    printf("enter the number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
       odd=odd+i;
    }
    printf("sum of odd number between1 to %d = %d\n ",n,odd);

    for(int a=2;a<=n;a=a+2)
    {
        even=even+a;
    }
     printf("sum of even number between1 to %d = %d\n ",n,even);
    
}
