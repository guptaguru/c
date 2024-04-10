#include<stdio.h>
int main()
{
int a,b,sum,differnce,*ptr1,*ptr2;
printf("enter any two number");
scanf("%d%d",&a,&b);
ptr1=&a;
ptr2=&b;
sum=*ptr1+*ptr2;
differnce=*ptr1-*ptr2;
printf("Sum=%d\nDiffernce=%d",sum,differnce);
return 0;
}