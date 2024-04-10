#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==1||n==0)
     return 1;
    else
    return n*factorial(n-1);
}
