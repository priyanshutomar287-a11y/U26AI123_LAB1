#include<stdio.h>
int main()
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);

    (ch >='a' && ch <='z') ? printf("smallcase") : printf("not smallcase");
}