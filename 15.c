#include<stdio.h>
int main()
{
    int n,a,b,c,d,e;
    printf("enter the marks ");
    scanf("%d",&a);
    printf("enter the marks ");
    scanf("%d",&b);
printf("enter the marks ");
    scanf("%d",&c);
printf("enter the marks ");
    scanf("%d",&d);
printf("enter the marks ");
    scanf("%d",&e);

    n =(a+b+c+d+e)/5;


if(n<=100 && n>90)
{
    printf("A");
}
else if(n<=90 && n>80)
{
    printf("B");
}
else if(n<=80 && n>70)
{
    printf("C");
}
else{
    printf("D");
}
}