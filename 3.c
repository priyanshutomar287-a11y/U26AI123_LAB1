#include<stdio.h>
int main()
{
    float base ,hr,dr,gross;
    
    printf("enter the base salary");
    scanf("%f",&base);
    hr=0.2*base;
    dr=0.1*base;
    printf("hr is %f",hr);
    printf("dr is %f",dr);
    gross=base+hr+dr;
    printf("gross salary is%f",gross);
}
