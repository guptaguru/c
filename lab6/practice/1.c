#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int main()
 {
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Sum=%d\n",add(a,b));
    printf("Differnce=%d\n",sub(a,b));
    printf("Product=%d\n",mul(a,b));
    printf("Quotient=%.2f\n",div(a,b));
 return 0;
 }
 int add(int a,int b)
 {
    return a+b;
 }
 int sub(int a,int b)
 {
    return a-b;
 }
 int mul(int a,int b)
 {
    return a*b;
 }
 float div(int a,int b)
 {
    return (float)a/b;
 }