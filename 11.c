#include<stdio.h>
int main()
{
    int  ts,s,m,h,day;
    printf("enter total second ");
    scanf("%d",&ts);
    m=ts/60;
    h=m/60;
    day=h/24;
    s=ts-m*60;
    printf("day %d hour %d min %d sec %d",day,h,m,s);
}