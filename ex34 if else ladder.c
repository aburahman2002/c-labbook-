#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a number :\n");
    scanf("%d",&num1);
    if(num1>0)
        printf("it is possitive ");
    else if(num1<0)
        printf("it is a neagtive value ");
    else
        printf("zero ");
    return 0;
}
