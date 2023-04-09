#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the number ");
    scanf("%d",&n);
    a=n&1;
    if(a)
        printf("%d is odd",n);
    else
        printf("%d is even",n);
}