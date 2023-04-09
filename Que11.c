#include<stdio.h>
int main()
{   int num,digit;
    printf("input a number and the digit you want to append ");
    scanf("%d%d",&num,&digit);
    num=num*10+digit;
    printf("\nthe new number is %d",num);
    
}