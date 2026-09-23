#include<stdio.h>
int main()
{
    printf("simple interest\n");
    float p,r,t,i;
    printf("enter the principal value");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&r);
printf("enter the time");
    scanf("%f",&t);

    i=(p*r*t)/100;
    printf("interest is %f",i);
    
}