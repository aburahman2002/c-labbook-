#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    (num%2==0)? printf("The number is Even"):printf("%d is not even ",num);
    return 0;
}
