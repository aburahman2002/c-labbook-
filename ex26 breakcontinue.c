#include<stdio.h>
int main()
{
    int i;
    double number,sum=0.0;
    for(i=0;i<=10;i++){
        printf("Enter n %d:",i);
        scanf("%lf",&number);
        if(number<0.0){
            continue;
        }
        sum+=number;
    }
    printf("sum=%2lf",sum);
    return 0;

}
