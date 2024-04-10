#include<stdio.h>
#include<math.h>
int main()
 {
    int n,s,k=0,c=0,i,r1,r2;
    printf("enter any number");
    scanf("%d",&n);
    r1=n;
    r2=n;
    while(r1!=0)
    {
     r1=r1/10;
     c++;
    }
    while(n!=0)
     {
        s=n%10;
        k=k+pow(s,c);
        n=n/10;
     }
     if(r2==k)
      printf("%d is Armstrong number\n",r2);
    else 
     printf("%d is not armstrong\n",r2);
    return 0;
 }