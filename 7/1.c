#include<stdio.h>
int input(int[],int);
int output(int[],int);
int main()
{
    int a[100],n=10;
    input(a,n);
    output(a,n);
    return 0;
}
int input(int a[],int n)
{
    int i;
    printf("enter the %d element",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
  return 0;  
}
int output(int a[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }
 return 0;
}
