#include<stdio.h>
#include<tgmath.h>
int main()
 {
   int i,n,sign=-1;
   float x,s=1;
   printf("enter the value of n and x");
   scanf("%d%f",&n,&x);
   x=x*(3.145/180);
   //cosx value
   for(i=1;i<=n;i+=2)
    {
      s=s+sign*pow(x,2*i)/tgamma(2*i);
       sign=-1*sign;
    }
    printf(" cox(%f) is%f",x,s);
   return 0;
 }