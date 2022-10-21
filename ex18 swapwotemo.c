#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter the first value:\n");
    scanf("%lf",&a);
    printf("Enter the second value:\n");
    scanf("%lf",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("********After Swaping********\n");
    printf("the first number is %lf\n",a);
    printf("the second value is %lf\n",b);
    return 0;
}
