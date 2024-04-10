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
     if(k==s)
     printf("%d is Palindrome",k);
     else
     printf("%d is not Palindrome",k);
     return 0;
 }