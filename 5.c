#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a is");
    scanf("%d",&a);
     printf("b is");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("a is %d",a);
    printf("b is %d",b);
}