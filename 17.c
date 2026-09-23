#include<stdio.h>
int main()
{
    int f,s,t;
    printf("enter first number\n");
    scanf("%d",&f);
    printf("enter second number\n");
    scanf("%d",&s);

printf("enter third number\n");
    scanf("%d",&t);


    if(f>s && f>t)
    {
        printf("first number is max");
    }
     else if(s>f && s>t)
     {
        printf("second value is max");
     }
     else
     {
        printf("third number is max");
     }
}