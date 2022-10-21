#include<stdio.h>
int main()
{
    char op;
    double num1,num2;
    printf("select the operator +,-,*,/ :");
    scanf("%c",&op);
    printf("Enter the two numbers :");
    scanf("%lf  %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%1lf + %1lf = %1lf",num1,num2,num1+num2);
        break;
    case '-':
        printf("%1lf - %1lf = %1lf",num1,num2,num1-num2);
        break;
    case '*':
        printf("%1lf * %1lf = %1lf",num1,num2,num1*num2);
        break;
    case '/':
        printf("%1lf  / %1lf = %1lf",num1,num2,num1/num2);
        break;
    default:
        printf("Error in the operator ...");
    }
    return 0;

}
