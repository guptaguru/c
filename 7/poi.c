#include<stdio.h>
int main()
{
    int x=10,*a,**b,***c;
    a=&x;
    b=&a;
    c=&b;
    printf("Adress of x is %p\n",a);
    printf("Adress of poniter of ais %p\n",&a);
    printf("Adress of pointer of a is %p\n",b);
    printf("adress of pointer  of b is %p\n ",&b);
    printf("adress of pointer  of b is %p\n ",c);
    printf("adress of pointer of pointer c is %p\n",&c);
    printf("value of x is %d",***c);
    return 0;
}