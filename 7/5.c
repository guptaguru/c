#include<stdio.h>
void input(int[],int);
void minmax(int[],int,int*,int*);
int main()
{
    int a[100],n,maximum,minimum;
    printf("enter the vlaue of n");
    scanf("%d",&n);
    input(a,n);
    minmax(a,n,&maximum,&minimum);
    printf("Maximun value=%d\tMinimum value=%d",maximum,minimum);
    return 0;
}
void input(int a[],int n)
{
    int i;
    printf("Enter %d number",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
}
void minmax(int a[],int n,int *max,int *min)
 {
    int i,l;
    *min=a[0];
    *max=a[0];
    for(i=1;i<n;i++)
    {
        if(*max<a[i])
         *max=a[i];
        else if(*min>a[i])
         *min=a[i];
    }
 }