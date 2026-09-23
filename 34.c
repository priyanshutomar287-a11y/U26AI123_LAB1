#include<stdio.h>
#include<math.h>
int main()
{
    int n,t1=0,t2=1,next;
    printf("enter the termnumber that you want fibonacci ");
    scanf("%d",&n);

    printf("0 1 ");
    for(int i=3;i<=n;i++)
    {
        next=t1+t2;
        t1=t2;
        t2=next;
        printf("%d\n",next);
    }

    
}
