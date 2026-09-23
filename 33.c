#include<stdio.h>
int main()
{
    int n,num,i;
    int max,min;

    printf("how many number do you want to enter?");
    scanf("%d",&n);

    if(n<2){
        printf("print at least 2 number\n");

    }

    printf("number 1");
    scanf("%d",&num);
    max=num;
    min=num;

    for(i=2;i=n;i++)
    {
        printf("enter %d number",i);
        scanf("%d",&num);


         if(num>max)
         max=num;
        else if(num<min)
        min=num;
    }
    printf("max is %d",max);
    printf("min is %d",min);
}