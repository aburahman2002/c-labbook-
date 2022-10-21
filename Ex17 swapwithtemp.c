#include<stdio.h>
int main()

{
    int first,second,temp;
    printf("enter the first  number:\n");
    scanf("%d",&first);
    printf("enter the second number:\n");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("***************\n");
    printf("After swapping\n");
    printf("first %d \n",first);
    printf("second %d \n",second);
    return 0;

}
