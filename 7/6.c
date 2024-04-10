#include<stdio.h>
#include<stdlib.h>
void input1(int[][100],int,int);
void input2(int[][100],int,int);
void matrix(int[][100],int[][100],int[][100],int,int,int,int);
void display(int[][100],int,int);
int main()
{
    int m,n,p,q,a[100][100],b[100][100],c[100][100];
    printf("enter the order of first matrix");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Multiplicaltion can't be performed");
        exit(0);
    }
    input1(a,m,n);
    input2(b,p,q);
    matrix(a,b,c,m,n,p,q);
    display(c,m,q);
    return 0;
}
void input1(int a[][100],int m,int n)
{
    int i,j;
    printf("Enter the element of first matrix(%d)(%d)",m,n);
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
 }
}
void input2(int b[][100],int p,int q)
{
    int i,j;
    printf("Enter the element of second matrix(%d)(%d)",p,q);
 for(i=0;i<p;i++)
 {
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
 }
}
void matrix(int a[][100],int b[][100],int c[][100],int m,int n,int p,int q)
{
    int i,j,k;
    for(i=0;i<m;i++)
     {  
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            c[i][j]+=a[i][k]*b[k][j];

        }
     }
}
void display(int c[][100],int m,int q)
{
       int i,j;
 for(i=0;i<m;i++)
 {
    for(j=0;j<q;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
 } 
}
