#include<stdio.h>
int main()
{
    int s,m,h,g,e;
    printf("enter the mark of science \n");
    scanf("%d",&s);
    printf("enter the mark of maths \n");
    scanf("%d",&m);
    printf("enter the mark of hindi \n");
    scanf("%d",&h);
    printf("enter the mark of gujarati \n");
    scanf("%d",&g);
    printf("enter the mark of english \n");
    scanf("%d",&e);

    float per;
    per =(s+m+h+g+e)/5;
    printf("percentage is %f",per);

}

