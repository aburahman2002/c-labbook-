#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("it is a leap year ");
    }
    else if(year%400==0)

        printf("it is a leap year ");

    else if(year%100==0)

        printf("It is not a leap year ");

    else
        printf("it is not a leap year ");
    return 0;
}

