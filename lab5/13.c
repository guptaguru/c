#include<stdio.h>
int main()
{
    int i,j,s,n=5;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
            printf("%d\t",j);
         printf("\n");
     }
     printf("\n");
    for(i=n;i>=1;i--)
     {
        for(j=1;j<=i;j++)
            printf("%d\t",j);
         printf("\n");
     }
    for (i=1; i<= n;i++) 
    {       
        for (s=1;s<=n-i;s++) 
            printf("\t ");
        for(j=1;j<=2*i-1;j++) 
            printf("*\t");
        printf("\n");
    }
    int l=1;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=i;j++)
         {
            printf("%d\t",l);
            l++;
         }
         printf("\n");
     }
for(i=n;i>=1;i--)
{
   for(s=1;s<=n-i;s++)
      printf("\t");
   for(j=1;j<=i;j++)
      printf("%d\t",j);
       for(j=i-1;j>=1;j--)
      printf("%d\t",j);
  
   printf("\n");
}
   for(i=1;i<=n;i++)
     {
        for(j=n;j>=i;j--)
         {
            printf("%d\t",j);
         }
         printf("\n");
     }

return 0;
}