#include<stdio.h>
int main()
{
    int a=10,*b,**c;
    b=&a;
    c=&b;
    printf("%d\t%p\n",a,&a);
    printf("%d\t%p\n",*b,b);
    printf("%d\t%p\n",**c,*c);
    return 0;
}