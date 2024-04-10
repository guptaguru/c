#include<stdio.h>
int main()
 {
    int i,j,n;
    float sum=0,a,b;
    printf("enter the value of n");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++)
     {
         a*=i;
         b=1/a;
         sum+=b;
     }
     printf("Sum of series is %f",sum);
     return 0;
 }
