#include<stdio.h>
void input(int[][100],int,int);
void addrowcolumn(int[][100],int[],int[],int,int);
int main()
{
    int a[100][100],r[100],c[100],m,n,i,j;
    printf("enter the order of matrix");
    scanf("%d%d",&m,&n);
    input(a,m,n);
    addrowcolumn(a,r,c,m,n);
    printf("Sum of rows:");
    for(i=0;i<m;i++)
     printf("%d\t",r[i]);
    printf("\nSum of colulm:");
    for(j=0;j<n;j++)
     printf("%d\t",c[j]);
    return 0; 
}
void input(int a[][100],int m,int n)
{
    int i,j;
    printf("Enter the element of matrix(%d*%d)",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
}
void addrowcolumn(int a[][100],int r[],int c[],int m,int n)
{
 int i,j;
 //adding row
 for(i=0;i<m;i++)
 { 
    r[i]=0;
    for(j=0;j<n;j++)
    r[i]+=a[i][j];
 }
 //adding column
 for(j=0;j<n;j++)
 {
    c[j]=0;
    for(i=0;i<m;i++)
    c[j]+=a[i][j];
 }
}
