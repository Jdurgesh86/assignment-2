#include<stdio.h>
int main()
{
    int num,sum;
    printf("input three digit number ");
    scanf("%d",&num);
    sum=num%10;
    num/=10;
    sum=sum+(num%10);
    num/=10;
    sum+=(num%10);
    printf("The sum is %d",sum);
}