#include<stdio.h>
int main()
{
    int a[5]={1,3,4,5,7},*p;
    p=&a[0];
    printf("%d\n",*p);
    printf("%d\n",a[0]);
    //printf("%d\n",*p++);//post increement so same value
    //printf("%d\n",*++p);//works from left to right
    //printf("%d\n",++*p);
    printf("%d\n",*(p+4));
    return 0;

}