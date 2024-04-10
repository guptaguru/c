#include<stdio.h>
int main()
 {
    int a[10],sum=0,i;
    float avg;
    for(i=0;i<10;i++)
     {
        printf("enter %d number",i+1);
        scanf("%d",&a[i]);

     }
     for(i=0;i<10;i++)
     {
        sum+=a[i];
     }
     avg=(float)sum/10;
     printf("%d is sum\n",sum);
     printf("%f  is average\n",avg);
     return 0;
 }