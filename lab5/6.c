#include<stdio.h>
#include<math.h>
int main()
 {
    int i,j,n,x;
    float sum=0,f=1,a;
    printf("enter the value of term and x");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
     {
         f*=i;
         a=pow(x,i)/f;
         sum+=a;
     }
     printf("Sum of series is %f",sum);
     return 0;
 }