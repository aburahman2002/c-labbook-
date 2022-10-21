#include<stdio.h>
int main()
{
    double num;
    printf("Enter a number :\n");
    scanf("%lf",&num);
    if(num<=0.0)
    {
        if(num==0)
        {
            printf("the number you have entered is zero ");
        }
        else
            printf("the number you have entered is negative ");
    }else
    printf("you have entered a possitive number ");
return 0;
}
