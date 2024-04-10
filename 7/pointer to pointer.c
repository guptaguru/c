#include<stdio.h>
#include<conio.h>
int main()
{
    int x=10,*a,**b;
    a=&x;
    b=&a;
    printf("Adress of x is %p\n",a);
    printf("Adress of poniter of ais %p\n",&a);
    printf("Adress of pointer of a is %p\n",b);
    printf("adress of pointer  of b is %p\n ",&b);
    return 0;
}