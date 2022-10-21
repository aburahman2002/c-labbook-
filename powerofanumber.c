#include<stdio.h>
#include<math.h>
int main()
{
    double base,exp,result;
    printf("Enter a base :");
    scanf("%lf",&base);
    printf("Enter a exponent:");
    scanf("%lf",&exp);
    result=pow(base,exp);
    printf("%lf ^ %lf = %lf",base,exp,result);
    return 0;

}
