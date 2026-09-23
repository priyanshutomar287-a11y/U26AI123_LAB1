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

    f>s && f>t ? printf("first is max ") : 1;
    s>f && s>t ? printf("second is max") : 1;
    t>f && t>s ? printf("third is max")  : 1;
}