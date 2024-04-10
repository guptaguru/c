#include<stdio.h>
int main()
{
int a,b,sum,differnce;
printf("enter two numver");
scanf("%d%d",&a,&b);
int*ptr1,*ptr2;
sum=*ptr1+*ptr2;
differnce=*ptr1-*ptr2;
printf("the adress of a is %x\n",&a);
printf("the adress of ptr is %x\n",&ptr1);
printf("the adress of a is %x\n",ptr1);
printf("the value of a is %d\n",*ptr1);
printf("Sum=%d\n",sum);
printf("Differnce=%d\n",differnce);
return 0;
}