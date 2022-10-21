#include<stdio.h>
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if (num/2==0){
    printf("the number is zero",num);
    }
    else if (num%2==0){
        printf("the number is even",num);
    }
    else{
    printf("the number is zero",num);
    }
}
