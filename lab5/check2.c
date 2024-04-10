#include<stdio.h>
int main()
 {
    int i,j,s,n=5;
for(i=n;i>=1;i--)
{
   for(s=1;s<=n-i;s++)
      printf("\t");
   for(j=1;j<=n;j++)
      printf("%d\t",j);
   for(j=i-1;j>=1;j--)
      printf("%d\t",j);
   printf("\n");
}
return 0;
 }