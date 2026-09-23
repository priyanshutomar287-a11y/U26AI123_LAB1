#include<stdio.h>
int main()
{
    int n;
    printf (" enter 1 for + 2 for - 3 for * 4 for / = ");
    scanf("%d",&n);

    switch(n)
{
    case(1): 
    {
        int  a,b,sum;
        printf( "a and b are\n ");
        scanf("%d  %d",&a,&b);
        sum=a+b;
        printf("sum is %d\n",sum);
        break;
    }
    case(2):
    {
        int c,d,m;
        printf("c and d are\n ");
        scanf("%d %d ",&c ,&d);
        m=c-d;
        printf("substract is %d\n",m);
        break;
    }
    case(3):
    {
        int e,f,g;
        printf("e and g are \n");
        scanf("%d %d ",&e , &f);
        g=e*f;
        printf("mutiply is %d\n",g);
        break;
    }
    case(4):
    {
        int h,i,j;
        printf("h and i are\n");
        scanf("%d %d",&h ,&i);
        j=h/i;
        printf("divison is %d\n",j);
    }
    default:
    {
        printf("not valid number");
    }
}

        
}