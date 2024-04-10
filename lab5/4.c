#include<stdio.h>
int main()
{
    int n,i;
    float b,s=0;
    printf("enter the value od n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
        b=(float)1/i;
        s+=b;
     }
    printf("Sum of series is %.2f",s);
}