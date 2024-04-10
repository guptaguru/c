#include<stdio.h>
int isPrime(int);
int main()
{
    int n,f;
    printf("enter any number");
    scanf("%d",&n);
    f=isPrime(n);
    if(f==0)
     printf("Prime number");
    else
     printf("Composite number");
}
int isPrime(int n)
{
    int i,flag=0;
    for(i=2;i<=(n/2);i++)
    {
         if(n%i==0)
         {
            flag=1;
            break;
         }
    }
   return flag;
}