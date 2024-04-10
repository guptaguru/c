#include<stdio.h>
void calculator(float,float,float*,float*,float*,float*);
int main()
{
    float a,b,sum,diff,pro,qua;
    printf("enter any two variavle");
    scanf("%f%f",&a,&b);
    calculator(a,b,&sum,&diff,&pro,&qua);
    printf("Sum=%.2f\n",sum);
    printf("differnce=%.2f\n",diff);
    printf("Product=%.2f\n",pro);
    if(b==0)
    printf("Divisible by 0 is not allowed!");
    else
    printf("Quotient=%.2f\n",qua);
    return 0;
}
void calculator(float a, float b, float *s,float *d,float *p,float *q)
{
    *s=a+b;
    *d=a-b;
    *p=a*b;
    if(b!=0)
    *q=a/b;
}