#include<stdio.h>
#include<math.h>
float factorial(int);
float power(int,int);
int i;
int main()
{   
    int x,n;
    float s=0;
    printf("enter the value of n and x");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        s=s+power(x,i)/factorial(i);
    }
    printf("sum of series is %f",s);
    return 0;

}
float factorial(int n)
 {
  if(n==0||n==1)
   return 1;
  else 
  return n*factorial(n-1);
 }
float power(int x,int n)
{
    return pow(x,n);
}