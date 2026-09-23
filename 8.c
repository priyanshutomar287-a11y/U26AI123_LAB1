#include<stdio.h>
int main()
{
    float sec,min,hour,day;
    sec=31558150;
    min=sec/60;
    hour=min/60;
    day=hour/24;
    printf("minute is %f",min);
    printf("hour is %f",hour);
    printf("day is %f",day);

}