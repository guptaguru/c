#include<stdio.h>
void busort(int[],int);
void input(int [],int);
void swap(int *,int *);
void display(int[],int);
int main()
{
    int a[100],n;
    printf("enter the value of n");
    scanf("%d",&n);
    input(a,n);
    busort(a,n);
    display(a,n);
    return 0;
}
void input(int a[],int n)
{
    int i;
    printf("Enter %d elemnet",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void swap(int *x,int *y)
{  
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
void busort(int a[],int n)
 {
    int i,j;
    for(i=0;i<n-1;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            swap(&a[i],&a[j]);
        }
     }
 }
 void display(int a[],int n)
{
    int i;
    printf(" Your %d element are:",n);
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}