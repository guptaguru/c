#include<stdio.h>
int main()
 {
    int num1,num2,c=0,i;
    printf("enter the range between two intger(a b)");
    scanf("%d%d",&num1,&num2);
    for(i=num1+1;i<num2;i++)
     {
        if(i%2==0)
        {
            printf("%d\t",i);
            c++;
        }
     }
         printf("Number of even number is %d",c);
    return 0;
 }