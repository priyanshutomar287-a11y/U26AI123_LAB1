#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float n,y;
    printf("x is \n");
    scanf("%d",&x);
    printf("n is \n");
    scanf("%f",&n);

    if(n==1)
    {
        y=1+x;

    }
    else if(n==2)
    {
        y=1+(x/n);
    }
    else if(n==3)
    {
        y=1+pow(x,n);
    }
    else if(n>3 && n<1)
    {
        y=1+n*x;
    }
    printf("y is %f",y);
}