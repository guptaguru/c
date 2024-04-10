#include<stdio.h>
int main()
 {
    int n,a=0,b=1,c;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d\t %d",a,b);
    for(int i=1;i<n;i++)
     {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
     }
    return 0;
 }