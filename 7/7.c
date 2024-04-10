#include<stdio.h>
int input(int[][100],int,int);
int output(int[][100],int,int);
int main()
{
    int a[100][100],m,n;
    printf("enter the order of matrix");
    scanf("%d%d",&m,&n);
    input(a,m,n);
    output(a,m,n);
    return 0;
}
int input(int a[][100],int m,int n)
{
    int i,j;
    printf("enter the element of order %d**%d",m,n);
    for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
    return 0;
}
int output(int a[][100],int m,int n)
{
    int i,j;
    printf("transpose of you matrix is\n");
    for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
     }
    return 0;
}
