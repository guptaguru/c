#include<stdio.h>
float calculator(float,float,float*,float*,float*);
int main()
{
    float a,b,sum,differnce,product;
    printf("enter two number:");
    scanf("%f%f",&a,&b);
    calculator(a,b,&sum,&differnce,&product);
    printf("Sum=%.2f",sum);
    printf("\ndiffernce=%.2f",differnce);
    printf("\nProduct=%.2f",product);
    return 0;
}
float calculator(float a,float b,float *sum,float *differnce,float *product)
{
 *sum=a+b;
 *differnce=a-b;
 *product=a*b;
}