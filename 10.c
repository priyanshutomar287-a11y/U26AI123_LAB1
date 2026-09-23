#include<stdio.h>
int main()
{
    int mat,chem,phy ,eng,cm;
    printf("enter maths mark outof 200\n ");
    scanf("%d",&mat);
    printf("enter maths chemistry outof 200\n ");
    scanf("%d",&chem);
    printf("enter physics mark outof 200\n");
    scanf("%d",&phy);
    printf("enter english mark outof 100 \n");
    scanf("%d",&eng);
    cm=mat/2+chem/2+phy/2+eng;
    printf("cutof mark is %d",cm);
}