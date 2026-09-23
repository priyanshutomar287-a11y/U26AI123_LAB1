#include<stdio.h>
int main()
{
    int n,num,i;
    int max1,max2;

    printf("how many number do you want to enter?");
    scanf("%d",&n);

    if(n<2){
        printf("print at least 2 number\n");

    }

    printf("number 1");
    scanf("%d",&num);
    max1=num;

    printf("enter 2 number ");
    scanf("%d",&num);
    max2=num;

    for(i=3;i<=n;i++)
    {
        printf("enter number %d ",i);
        scanf("%d",&num);

    

    if(num>max1)
    {
        max2=max1;
        max1=num;
    }
    else if(num>max2)
    {
       max2=num;
    }
    
}
printf("maximum is %d",max1);
    printf("second max is %d",max2);
}