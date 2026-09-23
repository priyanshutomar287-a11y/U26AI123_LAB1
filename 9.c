#include<stdio.h>
int main()
{
    float hr,min,sec,tsec;
    printf("hour is ");
    scanf("%f",&hr);
    printf("min is ");
    scanf("%f",&min);
    printf("sec is ");
    scanf("%f",&sec);

    tsec=hr*3600+min*60+sec;
    printf("tpotal second %f",tsec);
}