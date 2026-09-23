#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a ,&b);

    char ch;
    printf("choose any arithmetic operation like + - * / = \n");
    scanf(" %c",&ch);

    switch(ch)
    {
        case('+'):
        {
            int sum=a+b;
            printf("sum is %d",sum);
            break;
        }
        case('-'):
        {
            int min=a-b;
            printf("substraction is %d",min);
            break;
        }
        case('*'):
        {
            int mul=a*b;
            printf("multiplication is %d",mul);
            break;

        }
        case('/'):
        {
            int div=a/b;
            printf("division is %d",div);
            break;
        }
    }
}