#include<stdio.h>
int main
{
    int n,i,k;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
     {
        k=i*n;
        printf("%d\t%d\t=\t%d",n,i,k);
     }
    return 0;
}