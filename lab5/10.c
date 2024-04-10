#include<stdio.h>
int main()
 {
    int n,a,s=0,k;
    printf("enterany number");
    scanf("%d",&n);
    k=n;
    while(n!=0)
     {
       a=n%10;
       s=s*10+a;
       n=n/10;
     }
     printf("reverse of %d is %d",k,s);
     return 0;
 }