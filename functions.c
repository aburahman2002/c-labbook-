#include<stdio.h>
int addnumber(int a,int b)
{
    int result=a+b;
    return result;
}
void main()
{
    int n1,n2,sum;
    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);
    sum =addnumber(n1,n2);
    printf("sum is %d:",sum);
    return 0;
}
