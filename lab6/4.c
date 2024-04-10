#include<stdio.h>
int fib(int);
int main()
{
    int n;
    printf("enter number to know nth fibonaci series term ");
    scanf("%d",&n);
    printf("%dth fibonacci term is %d",n,fib(n));
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
     return n;
    else 
     return fib(n-1)+fib(n-2);
}