#include<stdio.h>
int main()
{
    float inr;
    printf("Enter the number you want to convert ");
    scanf("%f",&inr);
    inr=inr/76.23;
    printf("amount in usd is  %0.2f",inr);
}