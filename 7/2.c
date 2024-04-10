#include<stdio.h>
int input(int[],int,int*,float*);
int main()
{
    int a[100],sum,n;
    float average;
    printf("Enter the number of element");
    scanf("%d",&n);
    input(a,n,&sum,&average);
    printf("Sum=%d\tAverage=%.2f",sum,average);
    return 0;
}
int input(int a[],int n,int *sum,float *average)
{
    int i,s=0;
    printf("enter the %d element",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     s=s+a[i];
    }
    *sum=s;
    *average=(float)s/n;
  return 0;  
}
